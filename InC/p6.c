/*
 * Project Euler number 6
 *
 * Find the sum of squares square of sums diff for first 100 natural numbers
 */

#include <stdio.h>

int sumSquares() {

	int i;
	long int sumSquares = 0;

	for(i = 1; i <= 100; i++){
		sumSquares += (i * i);
	}

	return sumSquares;
}

int squareSums() {

	int i;
	int nums = 0;
	long squareSums = 0;

	for(i = 1; i <= 100; i++) {
		nums += i;
	}

	return squareSums;
}

int main() {

	long answer = squareSums() - sumSquares();
	printf("Project Euler 6 solution: %ld\n", answer);

	return 0;
}
