/* Project Euler problem 12
 * Erik Barzdukas
 *
 * Currently gets the right answer, but is really slow.
 * It needs some optimization.
 */

#include <stdio.h>


int triNumberGenerator(int x) {

/* Triangle number generation
 * formula: x(x+1)/2
 */
	int triNumber = (x*(x+1))/2;

	return triNumber;
}

int countDivisors(int i) {

	int divisorCount = 2;
	int guess = 2;

	while(guess < i) {
		if(i % guess == 0) {
			divisorCount++;
		}
		guess++;
	}

	return divisorCount;
}

int main(int argc, char *argv[]) {

	int divisorCount, highest = 2;
	int i = 8;
	int answer = 0;

	while(divisorCount <= 500) {
		int triNumber = triNumberGenerator(i);
		divisorCount = countDivisors(triNumber);
		
		if(divisorCount > 500) {
			answer = triNumber;
		}
		if(divisorCount > highest) {
			highest = divisorCount;
			printf("[HIGHEST}\t%d\n", highest);
		}
		i++;
	}
	
	printf("Problem 12 solution: %d\n", answer);

	return 0;
}
