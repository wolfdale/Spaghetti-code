

/***********************************************************************
*				HEADER SECTION
***********************************************************************/
#include "header.h"

/***************************************************************************
Function Name	 - 	file_operation
Description	 - 	concatenates the file naems, sends them to the server and receives 
			the file content that is stored in the output file.
Arguments	- 	int sd,char* argv[],int argc
Returns 	- 	returns error flag
****************************************************************************/
int file_operation(int sd , char* argv[], int argc)
{
	
	int loop_count = 0, status  = 0, ret = 0, fd = 0;
	char *buffer = "";

	fd = open( argv[argc-1], O_WRONLY|O_CREAT|O_TRUNC,S_IRWXU );  ///open syscall

	if ( 0 > fd )
	{
		printf("File opening failed!\n");
		exit(FAILURE);
	}

	for( loop_count = 3; loop_count < argc-1; loop_count++)
	{
		buffer = g_strconcat( buffer, argv[loop_count], " ", NULL );
		
	}

	send_to_server( sd , buffer );  //send buffer  to server 
	shutdown( sd , SHUT_WR );

	free( buffer );

	status  = write_to_file( sd, fd );

	ret = close( fd );
	if ( 0 > ret)
	{
		status = 1;
	}
	return status;
}

/************************************************************************
FUNCTION NAME	:send_to_server
DESCRIPTION	:sends the filename received as a string over the socket .
NOTES 		:No Error Checking is done .
RETURNS 	:void 
************************************************************************/
void send_to_server(int sd,char *fname) 	
{	
	int n , byteswritten=0 , written ;
	char buffer[MAX_SIZE];
	strcpy(buffer , fname);
	n=strlen(buffer);
	while (byteswritten<n)
	{
		written=write(sd , buffer+byteswritten,(n-byteswritten));
		byteswritten+=written;
	}
	printf("File name : %s sent to server \n",buffer);

}


/************************************************************************
FUNCTION NAME	:write_to_file
DESCRIPTION	:Reads the socket and write in the file descriptor .
NOTES 		:No Error Checking is done .
RETURNS 	:return int 
************************************************************************/
int write_to_file( int sd, int fd )
{	

	char buffer[MAX_SIZE];
	int bytesread;	
	while ((bytesread = read(sd , buffer , MAX_SIZE )) >0 )
	{
		if (write(fd, buffer , bytesread ) != bytesread)
		{
			return 1;
		}

	}
	return 0;
}
