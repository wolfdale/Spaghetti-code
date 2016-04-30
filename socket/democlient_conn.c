/***************************************************************************
*	FILENAME : democlient.c
*	DESCRIPTION:Contains Code for a client that will send a string 	
*	to a server process and exits.
*	Invoke the Executable as a.out IPAddress PortNo string   
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
void sendstring(int , char *);

int main( int C, char *V[] )
{
	int	sd,fd;
	struct	sockaddr_in serveraddress;

	sd = socket( AF_INET, SOCK_STREAM, 0 );
	if( sd < 0 ) {
		perror( "socket" );
		exit( 1 );
	}
	if (V[1] == NULL ) {
	printf ("PL specfiy the server's IP Address \n");
	exit(0);
	}
	if (V[2] == NULL ) {
	printf ("PL specify the server's Port No \n");
	exit(0);
	}
	if (V[3] == NULL ) {
	printf ("PL specfiy the string to be send to the server \n");
	exit(0);
	}
	memset( &serveraddress, 0, sizeof(serveraddress) );
	serveraddress.sin_family = AF_INET;
	serveraddress.sin_port = htons(atoi(V[2]));//PORT NO
	serveraddress.sin_addr.s_addr = inet_addr(V[1]);//ADDRESS
	if (connect(sd,(struct sockaddr*)&serveraddress,
			sizeof(serveraddress))<0)
	{
		printf("Cannot Connect to server");
		exit(1);
	}/*connects with the IP address of the remote host  and its port*/ 
	sendstring(sd,V[3]);
	return 0;
}
/************************************************************************
*	FUNCTION NAME:sendstring
*	DESCRIPTION: sends a string over the socket .
*	NOTES : No Error Checking is done .
*	RETURNS :void 
************************************************************************/

void sendstring(
	int sd,		/*Socket Descriptor*/	 
	char *fname)	/*Array Containing the string */
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
	printf("String  : %s sent to server \n",buffer);

}
/****************************************************************************/

