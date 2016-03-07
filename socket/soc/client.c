/***********************************************************************
*	File Name	:	client.c
*	Purpose	:	client side to send input and output file names
*	Created on 	:	
*	Created By	:	Prakhar Gupta	
***********************************************************************/

/***********************************************************************
*
*				HEADER SECTION
*
***********************************************************************/
#include "header.h"

/****************************************************************************
Function Name	-	main
Description	- 	Main function for client.
returns	- 	return SUCCESS on Successful execution
****************************************************************************/
int main(int argc, char* argv[])
{
	if(5 > argc)
	{
		perror("Enter arguments : SERVER'S IP // PORT NO. // INPUT FILES // OUTPUT FILE\n");
		exit(FAILURE);
	}
	struct sockaddr_in server_addr;

	int sd = 0, status = 0;
	sd = socket(AF_INET, SOCK_STREAM, 0);

	if (0 > sd)
	{
		perror("SOCKET");
		exit(FAILURE);
	}

	memset(&server_addr, 0 , sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(atoi(argv[2]));
	server_addr.sin_addr.s_addr = inet_addr(argv[1]);

	if (0 > connect(sd, ((struct sockaddr*)&server_addr), sizeof(server_addr)))
	{
		perror("Could not connect to server!\n");
		exit(FAILURE);
	}

	status = file_operation(sd, argv, argc);

	if ( status )
	{
		perror("Writing to output file failed!\n");
		exit(FAILURE);
	}

	else
	{
		printf ("Output File %s written \n", argv[argc-1]);
	}

	return SUCCESS;

}
