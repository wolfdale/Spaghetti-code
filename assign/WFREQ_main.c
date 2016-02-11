#include<glib.h>
#include"WFREQ_header.h"
/*****************************************************************************************
Function Name: delete_iter
Description: To delete all the entries of a hash table by accessing them one by one
@Arguments : gpointer to key , gpointer to value, and gpointer to user_data(optional/Pass null)
return : void retun type 
******************************************************************************************/
void delete_iter(gpointer key, gpointer value, gpointer user_data)
{
	
	free(value); //FREE all the value in hash table.

}

/*******************************************************************************************
Function Name: print_hash_iterator
Description: To print  all the entries of a hash table by accessing them one by one
@Arguments : gpointer to key , gpointer to value, and gpointer to user_data(optional/Pass null)
return : void retun type 
******************************************************************************************/
void print_hash_iter(gpointer key, gpointer value, gpointer user_data) 
{ 

	printf(user_data, key, *(gint*)value);//Print all the (key , value) pairs

}



/*******************************************************************************************
Function Name: input_to_hash_table
Description: used to input/feed the hash table
@Arguments: pointer to hash table & pointer to string
return type : void return type
******************************************************************************************/

void input_to_hash_table ( GHashTable* hash, char *str )
{
	int *str1 = g_hash_table_lookup(hash,str);
	if( str1 == NULL )
	{
		int *count = (int *)malloc(sizeof(int));
		*count = 1;
		g_hash_table_insert( hash, str, count );		
	}
	else
	{
		//int *count=g_hash_table_lookup(hash,str);
		*(gint*)str1 += 1;
		g_hash_table_insert( hash, str, str1 );		
	}
}
/******************************************************************************************
Function : main 
Description : initialize hash table,and utilise it to calculate frequency of words
finally deallocate the hash table
@Arguments: Command line args , (file name as  .txt )
return : returns zero for final exit
*****************************************************************************************/


int main( int argc , char *argv[] ) 
{ 
	int loop_counter = 0; 
  	int no_of_words = 0 ; 
  
    	FILE* fp = NULL; 
     	fp = fopen( argv[1], "r" ); 
    	//File checking 
    	if( NULL == fp ) 
     	{ 
		printf("Error opening file\n"); 
     	} 
  	
	char **words = read_words_from_file( fp, &no_of_words); 
     
	//Check if file is empty 
     	if( *( words + loop_counter ) == NULL ) 
     	{ 
		printf("Text File Empty !\n"); 
  	} 
     	//Error Checking 
     	if( (*( words + loop_counter ) == NULL ) && ( no_of_words == -1) ) 
     	{ 
        	 printf("Error !!"); 
     	} 
     
	GHashTable* hash = g_hash_table_new(g_str_hash, g_str_equal); 
     
	for( loop_counter = 0; loop_counter < no_of_words; loop_counter++ )
	{

		input_to_hash_table( hash , words[loop_counter] );

	}


	g_hash_table_foreach( hash, (GHFunc)print_hash_iter, "Frequncy of %s : %d\n");
      	
	g_hash_table_foreach( hash, (GHFunc)delete_iter, NULL);//call to deallocate hash table
	g_hash_table_destroy( hash );//destroy hash table
	free_all_memory(words);//free the character array
	
	fclose(fp);//close file
	
	return 0; 
}
