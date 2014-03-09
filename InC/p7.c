/*         
 *         Project Euler problem 7 solution
 *         IN PROGRESS                 
 */

#include <stdio.h>
#include <math.h>
#include <dbg.h>


int primeChecker(int guess) {
		
	check(guess <= 0, "Tried to check a negative int");
	if(guess % 2 == 0) {
		return 0;
	} else if (guess <= 1) {
		return 0;
	}

	// cycle through the long way
	int i;

	for(i = 2; i < sqrt(guess); i++) {
		if(guess % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main(int argc, char *argv[]) {
	
	unsigned int count;
	unsigned long int answer, i;

	for(i = 1; i < 100000; i++) {
		if(primeChecker(i)) {
			count++;
		}

		if(count == 10001) {
			answer = i;
			printf("Project Euler 7 solution: %ld\n", answer);
		}
	}
}