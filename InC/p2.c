#include <stdio.h>

int main(int argc, char *argv[])
{
	int first = 0, second = 1, next, sum;
	
	for( next = 0; next < 4000000; next++){
		next = first + second;
		first  = second;
		second = next;
		
		if( next % 2 == 0) {
			sum = sum + next;
		}
	}
	
	printf("Sum of all even numbers in Fib sequence below 4M: %d\n", sum);
	return 0;
}
