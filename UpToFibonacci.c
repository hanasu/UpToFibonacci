//Brendan O'Dowd 2/18/15
//Version 1.1
#include <stdio.h>

int input; //stores the inputted number
const RANGE_BEGIN = 0; //the lowest number that will be accepted as input
const RANGE_END = 35; //the largest number that will be accepted as input

void check_input(); //function that will make sure user input is valid
void fib_loop(); //calculates Fibonacci numbers with loops

int main () {
printf("Please enter an integer between 0 and 35: ");
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
	int first = 0; //first and second sum required for Fibonacci sequence
	int second = 1;
	int result = 0; //where the new sum will be stored

	if(input == 0) { //if the input is 1, only the first seed should be printed, as 1 > 0
		printf("0");
	}
	else { //if the number is >= 1 both seeds should be included
		printf("%d ",first);
		printf("%d ",second);
	}

	while (result < bound) { //if the last sum is not outside the bounds 
		result = first + second; //store the sum of the previous two numbers
		first = second; //the old second is now the new first
		second = result; //the old result is now the new second
		if (result <= bound) { //if the new sum is within the bounds, print it in sequence 
			printf("%d ",result);
		}
	}
	printf("\n"); //console formatting
}
