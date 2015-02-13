//Brendan O'Dowd 2/12/15
#include <stdio.h>

int input; //stores the inputted number
const RANGE_BEGIN = 0; //the lowest number that will be accepted as input
const RANGE_END = 35; //the largest number that will be accepted as input
const FIB_SEED = 1; //the initial starting value of the Fibonacci sequence

void check_input(); //function that will make sure user input is valid
void fib_loop(); //calculates Fibonacci numbers with loops

int main () {
printf("Please enter a number between 0 and 35: ");
scanf("%d",&input); //read the input from user as an integer
check_input(input); //check that the input is in bounds
fib_loop(input); //run the Fibonacci output up to the given input

return 0;
}

void check_input(int a) { //checks to see if inputted number is with valid defined range
	if (a < RANGE_BEGIN || a > RANGE_END) {
		printf("This input is invalid. Please enter a valid integer between 0 and 35: ");
		scanf("%d",&input);
		check_input(input);
	}
}

void fib_loop(int bound) {
	int first = FIB_SEED;
	int second = FIB_SEED;
	int result = 0;

	if(bound >= 1) {
		printf("%d ",first);
		printf("%d ",second);
	}

	while (result < bound) {
		result = first + second;
		first = second;
		second = result;
		if (result <= bound) { 
			printf("%d ",result);
		}
	}
	printf("\n"); //console formatting
}
