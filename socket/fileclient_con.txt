/***************************************************************************
*	FILENAME : fileclient.c
*	DESCRIPTION:Contains Code for a file client that will accept a filename
*	from the user and retrive that file from a server process and saves it 
*	in current directory.The file name is hardcoded as "test".
*	Invoke the Executable as a.out IPAddress PortNo Filename  
*****************************************************************************/
#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<errno.h>
#include	<string.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<sys/socket.h>
#include	<netinet/in.h>
#include	<arpa/inet.h>
#include	<fcntl.h>

void sendFileName(int , char *);
void readWriteFile (int,int);

int main( int C, char *V[] )
{
	int	sd,fd;
	struct	sockaddr_in serveraddress;
	char *ofile = "test";
	
	sd = socket( AF_INET, SOCK_STREAM, 0 );
	if( sd < 0 ) {
		perror( "socket" );
		exit( 1 );
	}

	if (V[1] == NULL ) {
		printf ("PL specfiy the IP address of the server. \n");
		exit(0);
	}
	if (V[2] == NULL ) {
		printf ("PL specfiy the port number for the server. \n");
		exit(0);
	}

	if (V[3] == NULL ) {
		printf ("PL specfiy the file to be fetched. \n");
		exit(0);
	}

	memset( &serveraddress, 0, sizeof(serveraddress) );
	serveraddress.sin_family = AF_INET;
	serveraddress.sin_port = htons(atoi(V[2]));//PORT NO
	serveraddress.sin_addr.s_addr = inet_addr(V[1]);//ADDRESS

	if(connect(sd,
		   (struct sockaddr*)&serveraddress,
		   sizeof(serveraddress)) < 0)
	{
		printf("Cannot Connect to server");
		exit(1);
	}

	sendFileName(sd,V[3]);
	shutdown(sd , SHUT_WR);

	fd = open(ofile ,O_WRONLY|O_CREAT|O_TRUNC,S_IRWXU); 
	if ( fd < 0 )
	{
		printf("File opening failed!\n");
		exit(0);
	}

	readWriteFile(sd,fd);
	return 0;
}
/************************************************************************
*	FUNCTION NAME:sendFileName
*	DESCRIPTION: sends the filename received as a string over the socket .
*	NOTES : No Error Checking is done .
*	RETURNS :void 
************************************************************************/

void sendFileName(
	int sd,		/*Socket Descriptor*/	 
	char *fname)	/*Array Containing the file name */
/*************************************************************************/
{	int n , byteswritten=0 , written ;
	char buffer[1024];
	strcpy(buffer , fname);
	n=strlen(buffer);
	while (byteswritten<n)
	{
		written=write(sd , buffer+byteswritten,(n-byteswritten));
		byteswritten+=written;
	}
	printf("File name : %s sent to server \n",buffer);

}
/****************************************************************************/
/************************************************************************
*	FUNCTION NAME:readWriteFile
*	DESCRIPTION: Reads the socket and write in the file descriptor .
*	NOTES : No Error Checking is done .
*	RETURNS :void 
************************************************************************/
void readWriteFile(
	int sd,		/*Socket Descriptor*/	 
	int fd)		/*File descriptor  */
/*************************************************************************/
{	char buffer[1024];
	int bytesread;	
	while ((bytesread = read(sd , buffer , 1024 )) >0 )
	{
		if (write(fd, buffer , bytesread ) != bytesread)
		{
			printf("File write Error \n");
			exit(0);
		}

	}
	printf ("File written successfully \n");

}


