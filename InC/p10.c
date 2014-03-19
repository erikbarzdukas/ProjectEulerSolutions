#include <stdio.h>
#include <math.h>

/* STILL DEBUGGING */

int primeCheck(int a) {
	int i = 2;
	
	if (a % 2 == 0) {
		return 0;
	}
	
	while (i <= sqrt((double)a)) {
		if (a % i == 0) {
			return 0;
		}
		i++;
	}
	printf("[PRIME]\t%d\n", a);
	return 1;
}

int main(int argc, char *argv[]) {

	int i;
	unsigned long long int sum = 2,
			       limit = 2000000;
	
	for (i = 3; i < limit; i++) {
		if (primeCheck(i)) {
			sum += i;
		}
	}
		
	printf("Problem 10 solution: %llu\n", sum);

	return 0;
}
