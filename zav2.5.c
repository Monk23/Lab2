#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) 
 {
	double mas[300] ;
	
	int i ;
	
	double c ;
	
	for (i = 0, c = - 10; c < 10; i++,c = c + 0.1)
	 
	{
	mas[i] =  c ;
	
	printf("\t mas [%d] = %.1lf\n", i, c) ;
	
	}
	
	return 0;
}
