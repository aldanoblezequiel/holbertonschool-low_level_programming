#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
	if(int n==0)
		{ printf("is zero");}
	else if(int n<0)
		{ printf("is negative");}
	else (int n>0)
		{ printf("is positive");} 
}
