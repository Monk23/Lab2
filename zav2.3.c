#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv) 
{
	int mas[100] ;
	
	int h, i, c ;
	
	printf("Vvedite h:") ;
	
	scanf("%d", &h) ;
	
	for(i = 0, c = 1;c < h ;i++, c = c + 2)
	{
	mas [i] = c ;
	
	printf("\t mas [%d] = %d\n", i,c) ;
	
	}
	
	return 0 ;
}
