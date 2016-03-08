#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include <glib.h>
struct data
{
	char* str;
	int count;
};

typedef struct data NODE;

int get_char_count ( char * str, char * base_char )
{
	int base_count = 0, count = 0;

	while( str[count] != '\0') 
	{
		if (str[count] == *base_char )
		{   
			base_count++;
			count ++;
		}
		count++;
	}
	return base_count;
}

gint sorter ( gconstpointer a , gconstpointer b )
{
	NODE * dum1;
	NODE * dum2;
	dum1 = (NODE*)a;
	dum2 = (NODE*)b;
	if( (dum1 -> count) > (dum2 -> count) )
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

void print_list ( gpointer value , gpointer user_data )
{
	NODE* dum ;
	dum = (NODE*) value;
	printf( "%s\n", dum->str);

}
	

int main( int argc , char * argv[])
{
	FILE *fp = NULL;
	fp = fopen( argv[1] , "r");
	NODE * dummy;
	char * line;
	GSList * list = NULL;
	while( fgets ( line , 256 , fp ) != NULL )
	{
		line[strcspn(line , "\n")] = 0;
		dummy = (NODE*)malloc(sizeof(NODE));
		dummy -> str = strdup (line);
		dummy -> count = get_char_count ( line , "a");
		 list =g_slist_append( list , dummy );
	}
        list = g_slist_sort( list  , sorter );
	g_slist_foreach( list , print_list , NULL );  
	
	return 0;

}
