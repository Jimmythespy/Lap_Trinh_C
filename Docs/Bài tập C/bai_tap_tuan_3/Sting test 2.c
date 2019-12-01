#include <stdio.h>
#include <string.h>
 
int main( )
{
    int len;
    char array[20];
    printf(" Enter string:");
    gets(array);
 
    len = strlen(array) ;
 
    printf ( "\string length  = %d \n" , len ) ;
    return 0;
}
