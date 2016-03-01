/*************************************************************************************************
					HEADER
**************************************************************************************************/

#include "header.h"

/************************************************************************************************************
Function Name: del_list (delete list elements)
Description:  free the value of each element in list
@argument : value as gpointer(void* pointer) 
return type: it return void
*************************************************************************************************************/ 

void del_list(gpointer value)
{
	free(value);
	
}

void del_list_2(gpointer value ,gpointer user_data)
{
	free(value);
}

void print_hash( gpointer key , gpointer val ,gpointer user_data)
{
	printf("%s \n",(char*)key);
}

/***************************************************************************************************************
Function Name: del_hash (delete hash)
Description:  free the value of each element in list
@argument : value as gpointer(void* pointer), key as gpointer(void* pointer),
		and user_data (NULL) 
return type: it return void
****************************************************************************************************************/ 

void del_hash( gpointer key , gpointer value , gpointer user_data)
{

	free(value);
	free(key);
}

/****************************************************************************************************************
Function Name: print_list (prints the list)
Description: iterate over the list to print the value in list 
@argument : value as gpointer(void* pointer), key as gpointer(void* pointer)
return type: it return void
****************************************************************************************************************/ 

void print_list(gpointer value , gpointer user_data)
{
	printf("%s\n",(char*)value);

}

/******************************************************************************************************************
Function Name: custom_search_print (prints the elements in list only if they fulfills the criteria (substring match)
Description: iterate over the list to print the value in list only if they match the substring( user specified ).
@argument : value as gpointer(void* pointer), key as gpointer(void* pointer)
return type: it return void
*******************************************************************************************************************/ 

void custom_search_print( gpointer value , gpointer substring)
{
	char * check=NULL;
	check = strstr( (char*)value , (char*)substring);
	if(check != NULL)
	{
		printf("%s\n", (char*)value);
	}
}

/******************************************************************************************************************
Function Name: cleanup ( cleans up the list )
Description:  frees all the elemenst in the list and set the list pointer to NULL.
@argument : Pointer to list ( which needs cleanup operartion) 
return type: it return pointer to list
*******************************************************************************************************************/ 

GSList* cleanup(GSList * list )
{
	g_slist_free_full( list , del_list );
	//g_slist_foreach( list , del_list , NULL);
	list = NULL;
	return list;
}

/******************************************************************************************************************
Function Name: insert_to_list (Insert to list)
Description:  insert the data in to list specified by caller function and returns the list to caller function.
@argument :  pointer to list and and character pointer to data to be inserted in list.
return type: it return pointer to list
*******************************************************************************************************************/ 

GSList*  insert_to_list ( GSList * list , char * data)
{
	list = g_slist_append( list,  data );
	
	return list;	
}

/******************************************************************************************************************
Function Name: print_last_cmd ( print last command )
Description:  it prints out the last command entered by the user
@argument : Pointer to list ( which contains all the commands ) 
return type: it return void
*******************************************************************************************************************/ 

void print_last_cmd(GSList *simple_list)
{
	char * last_cmd = NULL;
	GSList * rev_list = NULL;

	rev_list = g_slist_reverse(simple_list);
	
	last_cmd = g_slist_nth_data(rev_list, 1);
	printf("Last Command was: %s\n" , last_cmd);

	simple_list = g_slist_reverse( rev_list );
	return ;	
}

/******************************************************************************************************************
Function Name: last_n_cmd ( print last n commands )
Description: prints out the last n ( User specified ) commands that were entered.
@argument : Pointer to list and number ( n ) of commands to display 
return type: it returns void 
*******************************************************************************************************************/ 

void last_n_cmd(GSList * simple_list,int n)
{
	int counter;
	char * cmd = NULL;

	GSList* rev_list = g_slist_reverse(simple_list);
	printf("The last %d commands are :\n",n);
	for(counter= 0 ; counter<n ; counter++)
	{
		cmd  = g_slist_nth_data (rev_list,counter);    
		if( NULL !=cmd )
		{
			printf("%s\n" , cmd);
		}
	}
	simple_list = g_slist_reverse( rev_list );
	return;
}

/******************************************************************************************************************
Function Name: search_substr ( search substring )
Description: it calls the custon_search_print ( g_slist_foreach ) to print the commands which matches 
	      the substring ( User Specified )
@argument : Pointer to list and  char pointer to substring to be searched.
return type: it returns void 
*******************************************************************************************************************/ 

void search_substr( GSList * list , char * substring)
{
	printf("Command Found are : \n");
	g_slist_foreach( list , (GFunc)custom_search_print , substring );
	return;
}


/******************************************************************************************************************
Function Name: input_to_hash ( insert/insput to hash table )
Description: insert data into hash table along with the frequency of the data.
@argument : Pointer to list and char pointer to data.
return type: it returns void 
*******************************************************************************************************************/ 

void input_to_hash_table ( GHashTable* hash, char *str )
{
	int * string = g_hash_table_lookup(hash,str); //get the value
	if( string == NULL )
	{
		int *count = (int *)malloc(sizeof(int));
		*count = 1;
		g_hash_table_insert( hash, str, count );		
	}
	else
	{
	
		*(gint*)string += 1;
		g_hash_table_insert( hash, str, string );		
	}
	

}



/******************************************************************************************************************
Function Name: rev_search_history ( reverse search history ( ctrl+R command )
Description: reverse searches the command ( User Specified ) in history list. 
@argument : Pointer to list and char pointer to the commnad ( USER Specified ).
return type: it returns void 
*******************************************************************************************************************/

void rev_search_history( GSList*  simple_list , char * cmd ) 
{
	GSList* rev_list = g_slist_reverse( simple_list );
	printf("Reverse Seaching the command :\n");
	g_slist_foreach( rev_list , search_rev , cmd);
	simple_list = g_slist_reverse( rev_list );
	return;

}


/******************************************************************************************************************
Function Name: search_rev ( supporting iterator for rev_search_history function )
Description: it compares the list elements to commands (User specified) for reverse searching.  
@argument : value as gpointer(void* pointer), user_data as gpointer(void* pointer) 
return type: it returns void 
*******************************************************************************************************************/

void search_rev( gpointer value , gpointer user_data)
{
	if( strcmp( (char*)value , (char*)user_data) == 0)
	{
		printf("%s\n",(char*)value);
	}

} 



/******************************************************************************************************************
Function Name: command
Description: This function distinguises the user commnad & execute the proper function according to command. 
@argument : char pointer to user_command , list pointer to simple_lsit , list pointer to datestring_list and 
		pointer to hash table.
return type: it returns void 
*******************************************************************************************************************/

void command ( char * data , GSList * simple_list , GSList* datestring_list, GHashTable* hash ) 
{
	char * string_part1=NULL;
	char * string_part2=NULL;
	string_part1 = strtok( data , " ");
	string_part2 = strtok( NULL , "\0");
	char* substring = NULL;
	

	if(NULL  !=  string_part2)
	{
		
		if( strcmp("time" , string_part2 ) == 0 )
		{

			g_slist_foreach( datestring_list, (GFunc)print_list, NULL);
			return;                                                          //print whole list with timestamp	

		}
			
		if( strcmp("igdup", string_part2 ) == 0)
		{
			//GList* key_list = NULL;
			//key_list = g_hash_table_get_keys(hash);                           //get all the keys(unique)
			//g_list_foreach( key_list , print_list , NULL);                     //print the key list
			//g_list_free(key_list);
			g_hash_table_foreach( hash , print_hash ,NULL);
			return;                                                          //ignore duplicate
		}
		if( strcmp( "last", string_part2 ) == 0 )
		{
			
			print_last_cmd(simple_list);		
			return;
		
		}

		substring = strstr(string_part2, "!");
		if (substring != NULL )
		{
				
			string_part2 = strtok(string_part2 , " ");
			char * integer_str = strtok(NULL , "\0");
			int line_no = atoi( integer_str );
			history_at_line( simple_list, (line_no-1) );			
			return;
		}
		 
		substring = strstr(string_part2 , "last");
		if(substring != NULL)
		{ 
				
			string_part2 = strtok(string_part2 , " ");
			char * integer_str = strtok(NULL , "\0");
			int line_no = atoi ( integer_str );	
			last_n_cmd( simple_list , (line_no));
			return;
		}
		substring = strstr( string_part2 , "substring");
		if(substring != NULL )
		{
			string_part2 = strtok(string_part2 , " ");
			char * substr_search = strtok(NULL , "\0");
			search_substr(simple_list , substr_search );
			return;
		}
		
		substring = strstr( string_part2 , "rs");
		if(substring != NULL)
		{
			string_part2 = strtok(string_part2 , " ");
			char * cmd_search = strtok(NULL, "\0");
			rev_search_history( simple_list , cmd_search );
			return;
		}
		

	}
	
	if( strcmp(data , "history\0") == 0  )
	{
		g_slist_foreach( simple_list, (GFunc)print_list, NULL); //print whole list
		return;
	}
}



/******************************************************************************************************************
Function Name: read_history_file
Description: read the history file ( if it exists )
@argument : NONE 
return type: it returns void 
*******************************************************************************************************************/

/*READ whole History FILE / LIST ALL command Entered*/
void read_history_file()
{

	FILE *history_file;
	history_file = fopen("history.txt" , "r") ; //ONLY for reading
	const size_t line_size = MAX_BUF; 
	char * line = NULL;
	line = malloc(line_size);
	while (fgets(line, line_size, history_file) != NULL) 
	{
		printf("%s",line);		

	}

	free(line);
	fclose(history_file);

}


/******************************************************************************************************************
Function Name: history_at_line ( prints out the command at line number( user specified ) )
Description: prints out the command at a particular line where line no is specified by user.
@argument : Pointer to list and number ( n ) as line number. 
return type: it returns void 
*******************************************************************************************************************/

void history_at_line( GSList* list, int n)
{
	char* data = g_slist_nth_data( list , n);
	printf("Command at line Number %d is  %s\n", n+1, data);         //Prints out history at line number
	return;
}
