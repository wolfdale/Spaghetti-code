/*************************************************************************************************
					HEADER
**************************************************************************************************/

#include "header.h"

/**************************************************************************
Function Name: main

Description: This function act as a entry point for simulation of history 
	command, it implements command specifier to distinguish different history commands.

@argument : No command line arguments requires

return type: it return int
**************************************************************************/ 


int main(int argc , char *argv[])
{
	FILE *fp;
	time_t clock_set;
	struct tm *ltime;
	static struct timeval _t;
	static struct timezone tz;
	

	char *data = malloc(sizeof(char)*MAX_BUF);
	
	char* dup_data;
	dup_data = (char*)malloc(sizeof(char)*MAX_BUF);

	char* final;
	final = (char*)malloc(sizeof(char)*MAX_BUF);
	
	char* substring = NULL;	
	GSList *datestring_list = NULL;
	GSList *simple_list = NULL;
	GHashTable* hash = g_hash_table_new(g_str_hash , g_str_equal);
	
	while(1)
	{
			
		printf("Enter Command : ");
    		if (fgets(data, MAX_BUF, stdin)) 
		{
			
			data[strcspn(data,"\n")] = 0; //Remove Trailing New line character
			
			if(!strcmp( data, "exit"))
			{
				free(data);
				free(final);
				free(dup_data);
				//datestring_list = cleanup( datestring_list );
				g_slist_foreach( datestring_list , del_list_2 , NULL);
				g_slist_free( datestring_list );
				//simple_list = cleanup( simple_list );
				g_slist_foreach( simple_list , del_list_2 , NULL);
				g_slist_free( simple_list );
				
				g_hash_table_foreach( hash , del_hash , NULL);
				g_hash_table_remove_all(hash);
				g_hash_table_destroy(hash);	
				
				return 0;
				
			}		
			
			/*Write All commands in file FILE for BACKUP */
			fp = fopen("history.txt","ab");
			fprintf( fp ,"%s\n ", data );
			fclose( fp );


	
			/*Maintain all the command in list*/
		        simple_list = insert_to_list( simple_list, strdup(data) );
			
			/*Maintain a HAsh table to remove duplicate*/
			input_to_hash_table( hash, strdup(data) );

			/*LIST ALL COMMANDS WITH TIME STAMP*/
			/*INIT CLOCK & TIME STAMP OPS */
			time(&clock_set);
			ltime = (struct tm *) localtime(&clock_set);
			gettimeofday(&_t, &tz);
			strftime(final,100,"%d.%m.%y %H:%M:%S",ltime);
    			sprintf(final, "%s.%d", final,(int)_t.tv_usec);
			strcpy(dup_data, data);
			dup_data = strcat(dup_data,"  ");
			dup_data = strcat(dup_data,final);
			
		        datestring_list = insert_to_list( datestring_list,strdup(dup_data) );	
			
			
			substring=strstr (data, "history");
			if ( substring != NULL	)	
			{		
				command( data  , simple_list, datestring_list , hash);
			}
			
			if( strcmp("clean", data ) == 0)
			{
				//g_slist_foreach( simple_list , del_list , NULL);
				simple_list = cleanup(simple_list);
				
				//g_slist_foreach( datestring_list , del_list , NULL);
				//datestring_list = NULL;
				//simple_list = cleanup(simple_list);
				datestring_list = cleanup( datestring_list);
				
				g_hash_table_foreach( hash , del_hash , NULL);
				g_hash_table_remove_all(hash);
					
			}	
  			
		}


	}

}


			


				
