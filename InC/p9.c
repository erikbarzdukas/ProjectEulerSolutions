/* Project Euler 9 solution
 * Erik Barzdukas
 */
 
 #include <stdio.h>
 
 
 int main(int argc, char *argv[]) {
	
 	int a, b, c, answer = 0;
 	
 	/* Iterate through as little as possible to still
 	 * generate all Pythagorean triples
 	 */
 	for (a = 1; a < 350; a++) {
 		b = a+1;
 		c = b+1;
 		while (c <= 550) {

 			int ab = (a*a + b*b);
 			while ((c*c) < ab) {		//Compiler was complaining when ab expanded was in while()
 				c++;
 			}
 			if ((c*c) == ab) {
 				if ((a+b+c) == 1000) {
 					answer = (a*b*c);
 				}
 			}
 			b++;
 		}	
 	}
 	printf("Problem 9 solution: %d\n", answer);
 	
 	return 0;
 }
