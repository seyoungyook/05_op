#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num = 0;
	char C;
	
	printf("input a string : ");
	
	while ( ( C = getchar()) !='\n')
	{
		if ( C <= '9' && C >= '0')
		{ 
			num++;
		}
	}
	
	printf("number is %d", num);
	return 0;
}
