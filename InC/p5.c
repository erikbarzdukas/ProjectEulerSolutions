#include <stdio.h>
#define TRUE 1
#define FALSE 0
/* FIX MEEEE !!!!!!
 * divideTest goes through the for loop incorrectly
 */

int divideTest(int *guessptr) 
{
	int i;

	for(i = 1; i <= 21; i++){
        	if(*guessptr % i != 0){
			return FALSE;
		}
	}
	return TRUE;
}

int main() 
{
	int *guessptr;
	int guess = 2520;
	guessptr = &guess;
	int done = TRUE;

	printf("Thinking...\n");
	while(done){
		if(divideTest(&guess) == TRUE){
			printf("%d is the answer to Project Euler 5\n", *guessptr);
			done = FALSE;
		} else {
			guess = guess + 2520;
		}
	}
	return 0;
}	
