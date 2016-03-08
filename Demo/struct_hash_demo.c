#include<glib.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
	char * str;
	int len;
};

typedef struct data NODE;

void print_hash ( gpointer key  ,gpointer val , gpointer user_data )
{
	NODE* dum ;
	dum = (NODE*) val;
	printf( "%s\t%d\n", dum -> str , dum -> len );
}

void key_del( gpointer key )
{
	free(key);
}

void val_del( gpointer val)
{
	NODE* del;
	del = (NODE*)val;
	free( del -> str );
	free( del );	

}

void print_list ( gpointer val , gpointer user_data )
{
	printf("%s\n" , (char*)val );
}

void struct_print ( gpointer val , gpointer user_data )
{
	NODE* del ;
	del = (NODE*)val;
	printf("%s\t%d\n" , del -> str , del -> len );
}

int main( int argc, char * argv[])
{
	GHashTable * hash = g_hash_table_new_full( g_str_hash , g_str_equal , key_del , val_del );
	FILE * fp = NULL;
	char * line;
	NODE * dummy;
	GList * val_list = NULL;
	GList * key_list = NULL;
	fp = fopen( argv[1] , "r");
	line = malloc( 0 * sizeof(*line));
	while ( fgets( line , 256 , fp ) != NULL )
	{
		line[strcspn(line , "\n" )] = 0;
		dummy =(NODE* )malloc(sizeof(NODE));
		dummy -> str = strdup ( line );
		dummy -> len = strlen ( line );
		
		g_hash_table_insert ( hash , strdup(line) , dummy );

	}
	key_list = g_hash_table_get_keys( hash );
	g_list_foreach ( key_list  , print_list , NULL );
	printf("-----------------\n");
	
	val_list = g_hash_table_get_values( hash );
	g_list_foreach ( val_list , struct_print , NULL );
	g_hash_table_foreach ( hash , print_hash , NULL );
	g_hash_table_remove_all ( hash );


	return 0;
}

	


