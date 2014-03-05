/*
 *             Project Euler Problem 4 in C
 *
 */
#include <stdlib.h>
#include <stdio.h>

//Function to check for a palindrome
int check_palindrome(unsigned long int number) {

	unsigned long int reverse_number = 0;
	unsigned long int i = number;
	while (i > 0) {

		reverse_number = (reverse_number * 10) + (i % 10);
		i = i / 10;
	}

	if (number == reverse_number) {
		return 1;
	} else {	
		return 0;
	}
}

int main(int argc, char *argv[]) {


	unsigned int i, j;
        unsigned long int guess, largest_palindrome = 0;
	
	
	for (i = 999; i >=100; i--) {
		for (j = 999; j >= i; j--) {
			guess = i * j;
			if (guess > largest_palindrome && check_palindrome(guess)) {
				largest_palindrome = guess;
			}
		}
	}

	printf("Project Euler 4 solution is %ld\n", largest_palindrome);
	return 0;
}
