

/***********************************************************************
				HEADER SECTION
***********************************************************************/
#include "header.h"

/****************************************************************************
Function Name - main
Description - main procedure for server
Returns - return 0 on Successfull execution
****************************************************************************/
int main(int argc, char* argv[])
{
	if(1 < argc )								//Argument Check
	{
		perror("Arguments not required!\n");
		exit(EXIT_FAILURE);
	}

	int	sd,connfd,retbind;
	struct	sockaddr_in
		serveraddress,cliaddr;
	socklen_t len;
	pthread_t th1;
	char buf[MAX_SIZE];

	sd = socket( AF_INET, SOCK_STREAM, 0 );  				// af_inet = internet sock_stream/protoclo = tcp 
	if( 0 > sd )
	{
		perror( "socket" );    					//Not able to create socket
		exit( FAILURE );
	}

	memset( &serveraddress, 0, sizeof(serveraddress) );  		//memory set = 0
	serveraddress.sin_family = AF_INET;
	serveraddress.sin_port = htons(SERVERPORT);			//convert from HBO to NBO   (PORT NO : 54544)
	serveraddress.sin_addr.s_addr = htonl(INADDR_ANY);		//convert IP ADDRESS form host byte order to network Byte order.
	
	retbind = bind(sd,(struct sockaddr*)&serveraddress,sizeof(serveraddress));   // Bind sys call 

	if(-1 == retbind)
	{
		perror("Bind Fails\n");   					//Bind Fail
		exit(FAILURE);
	}

	listen(sd,5);								// Listen with queue length  = 5

	for(;;)
	{
		printf("I am waiting(Server Executing)-----Start of Main Loop\n");
		len = sizeof(cliaddr);
		connfd = accept(sd,(struct sockaddr*)&cliaddr,&len);	//Accept the connection
		if ( 0 > connfd)
		{
			if (errno == EINTR) 
			printf("Interrupted system call ??");
			continue;
		}
		printf("Connection from %s\n", inet_ntop(AF_INET,&cliaddr.sin_addr,buf,sizeof(buf)));
		pthread_create(&th1,NULL,&doit,(void*)(intptr_t)connfd); //Thread create		
			
	}

	return SUCCESS;
}
