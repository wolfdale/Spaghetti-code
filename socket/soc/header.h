
#ifndef SP1_HEADER_H
#define SP1_HEADER_H


    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <arpa/inet.h>
    #include <glib.h>
    #include <errno.h>
    #include <pthread.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <netinet/in.h>
    #include <sys/wait.h>
    #include <string.h>

    

    	#define MAX_SIZE 1024
    	#define SERVERPORT 54544
	#define SUCCESS 0 
	#define FAILURE -1


    

    	int file_operation(int  , char*[], int );
    	void send_to_server(int , char *);
    	int write_to_file(int ,int);
    	void *doit(void *);
    	void read_file(gpointer , gpointer);
	void del_list(gpointer , gpointer);



#endif
