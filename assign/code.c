#include <stdlib.h>
#include <glib.h>
#include <stdio.h>
#include <string.h>

#define FAILURE -1;
#define SUCCESS 0;


void print_hash_iter(gpointer key, gpointer value, gpointer user_data) 
{ 
        GString *sk,*sv;
	sv=value; 
        sk=key;
	printf("%s%s", sk->str,sv->str);//  ,*(gchar*(key->str)), *(gchar*(value->str)) );//Print all the (key , value) pairs

}

void search_and_replace(  GHashTable *config_hash ,char * script_line , FILE *new_script )
{
		//GString return_;
		char * split_token_value;
		char * split_token_key;
		char * split_token;
		char * first_part;
		char * token_part;
		char * duplicate;
		duplicate = (char*)malloc(sizeof(char)*(strlen(script_line)+1));
		duplicate = strdup(script_line);
		first_part = strtok ( script_line , " " );
		//printf( "%s\n" , f_part );
		if( strcmp( first_part, "mystring"  ) != 0)
		{
			fputs( duplicate , new_script ); 
			return ;			
		}	
		else
		{		
			fputs( first_part , new_script );
		}

		token_part = strtok ( NULL , " " );
		printf( "\n%s\n" , token_part );
		split_token_key = strtok( token_part , "=" );
		printf(" \n\n%s\n " , split_token_key);
		char* return_ = (char *)g_hash_table_lookup( config_hash, split_token_key );	
		if( return_ == NULL)
		{
			fputs( duplicate , new_script );  //if key not found
		}
		
		else 
		{	
			fputs( split_token_key , new_script) ;
			fputs( "=" ,new_script );	
			fputs ( return_ , new_script  );

		}	
				
				
	
		


		//split_token_value  = strtok( NULL ,"=" );
		//printf("%s\n" ,s_s_part ); 

		fputs ( "\n" , new_script) ;


}




void main(int argc , char *argv[])
{
	FILE* f_config = NULL;
	FILE* f_script = NULL;
	FILE* new_script = NULL;
     	f_config = fopen( argv[1], "r" ); 
	f_script = fopen( argv[2], "r" );
    	//File checking 
    	if( (NULL == f_config) && (NULL == f_script) ) 
	{ 
		printf("Error opening file\n");

	}

	//INIT HASH TABLE
	GHashTable *config_hash = g_hash_table_new( g_str_hash , g_str_equal);
 
	const size_t line_size = 300;
	char* line = malloc(line_size);
	while (fgets(line, line_size, f_config) != NULL) 
	{
    		char * first_part;
		char * second_part;
		first_part = strtok( line , "=" );
		second_part = strtok( NULL , "=");
		
		GString* conf_str_fir = g_string_new(first_part) ; 
		GString* conf_str_sec = g_string_new(second_part);
		//printf("%s\n", conf_str_fir->str);
		//printf("%s\n", conf_str_sec->str);
		g_hash_table_insert( config_hash, conf_str_fir->str  , conf_str_sec->str );

		

	
	}		
	free(line);	
	//g_hash_table_foreach( config_hash, (GHFunc)print_hash_iter,NULL ); //print hash
	

	new_script = fopen( "new_script.txt" , "w");
	char *script_line = malloc(line_size);
	while ( fgets (script_line , line_size, f_script ) != NULL  )	
	{
		
		search_and_replace(config_hash, script_line, new_script );
	}
	/*	//GString return_;
		char * split_token_value;
		char * split_token_key;
		char * split_token;
		char * first_part;
		char * token_part;
		char * duplicate;
		duplicate = (char*)malloc(sizeof(char)*(strlen(script_line)+1));
		duplicate = strdup(script_line);
		first_part = strtok ( script_line , " " );
		//printf( "%s\n" , f_part );
		if( strcmp( first_part, "mystring"  ) != 0)
		{
			fputs( duplicate , new_script ); 
						
		}	
		else
		{		
			fputs( first_part , new_script );
		}

		token_part = strtok ( NULL , " " );
		printf( "\n%s\n" , token_part );
		split_token_key = strtok( token_part , "=" );
		printf(" \n\n%s\n " , split_token_key);
		char* return_ = (char*)g_hash_table_lookup( config_hash, split_token_key );	
		if( return_ == NULL)
		{
			fputs( duplicate , new_script );  //if key not found
		}
		
		else 
		{	
			fputs( split_token_key , new_script) ;
			fputs( "=" ,new_script );	
			fputs ( return_ , new_script  );

		}	
				
				
	
		


		//split_token_value  = strtok( NULL ,"=" );
		//printf("%s\n" ,s_s_part ); 

		fputs ( "\n" , new_script) ;



	}*/
		
	free(script_line);      	    	     					     	  





	
    	
}
























