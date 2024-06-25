#include<stdio.h>

int main () {
	
	int digit, number, first_number, last_number;
	
	printf("1. Write a C program that prompts the user to enter a 3 digit's positive integer. Find the sum of first and last digit.\n\n");
	
	printf("This is a program to print sum of First and Last digit.\n\n");
	
	printf("Enter the number :- ");
	scanf("%d", &digit);
	printf("\n");
	
	last_number = digit%10;
		
	while(1) {
		if(number==0) {
			break;
		}
		first_number=number%10;
		number=digit/10;
	}
	
	printf("\n\nfirst_number = %d", first_number);
	
	return 0;
}