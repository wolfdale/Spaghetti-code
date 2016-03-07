

/***********************************************************************
*				HEADER SECTION
***********************************************************************/
#include "header.h"


/***************************************************************************
Function Name	- doit
Description	-starts a thread to read filename from client, stores contents 
		in a structure and sends the content of file to client if found.
Arguments	- void *connfd
Returns	- NOTHING
****************************************************************************/
void *doit(void *connfd) /*The connection socket is passed as the argument */
{
	char buffer[MAX_SIZE] ;
	GSList *data_list = NULL;
	int pointer=0,n;
	int char_written = 0;
	GString *trans_buf = g_string_new("");
	char *token = NULL;
	char tokenizer[2] = " ";

	pthread_detach(pthread_self());

	while (( n = read((intptr_t)connfd,( buffer + pointer ),1024))>0 )
	{
		pointer = pointer+n;
	}
	buffer[pointer]='\0';                  //Null terminate the string

	token = strtok( buffer,tokenizer );
	while(token != NULL)
	{
		printf( " %s\n", token );
		data_list = g_slist_append(data_list, strdup(token));
		printf("SERVER THREAD %zd  :Request to send file  %s\n ",pthread_self(),token);
		token = strtok(NULL,tokenizer);
	}

	g_slist_foreach( data_list, read_file, trans_buf );

	char_written = 0;
	while ( char_written < trans_buf->len)
	{
		char_written += write( (intptr_t)connfd , ((trans_buf->str)+char_written) , trans_buf->len-char_written);
	}
	g_string_free(trans_buf, TRUE);

	g_slist_foreach(data_list, del_list, NULL);
	g_slist_free(data_list);

	printf ("File data sent \n");

	close((intptr_t)connfd);
	pthread_exit(NULL);
}

/***************************************************************************
Function Name	- read_file
Description 	- read all the contents of files in the list
Arguments	- gpointer val
		  gpointer data
returns 	- Void
****************************************************************************/

void read_file(gpointer val, gpointer data)
{
	GString *trans_buf = (GString*)data;		//Gstring INIT
	char *fname = (char*)val; 
	char *str = NULL;
	
	if(g_file_get_contents(fname, &str, NULL, NULL))
	{
		trans_buf = g_string_append(trans_buf, str);
	}
	else
	{
		printf("SERVER  THREAD %zd: ERROR OPENING FILE %s \n", pthread_self(), fname);
	}
	g_free(str);
}

/*****************************************************************************************
Function Name	-del_list
Description	- free each entries of linked list.
Arguments	-gpointer value
		 gpointer userdata
Returns 	- 	void
****************************************************************************/

void del_list(gpointer value, gpointer userdata)
{
 	g_free(value);
}
