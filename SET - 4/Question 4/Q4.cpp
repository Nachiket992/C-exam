#include<stdio.h>

void divisible(){
	int number;
	
	printf("Enter the number :- ");
	scanf("%d", &number);
	printf("\n");
	
	if(number % 3 == 0 && number % 5 == 0) {
		printf("This number is divisible by 3 and 5.");
	} else {
		printf("This number is not divisible by 3 and 5.");
	}
	
}

int main() {
	
	printf("4. Create a C program that defines a function to check if a given number is divisible by 3 and 5 both or not.\n\n");
	
	divisible();
	
}