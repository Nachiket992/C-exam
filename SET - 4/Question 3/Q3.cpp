#include<stdio.h>

int main() {
	
	printf("3. Implement a C program to print the following pattern using nested for loop.\n\n");
	
	for(int i=1; i<=5; i++) {
		for(int s=1; s<i; s++) {
			if(s==1) {
				printf("   ");
			} else {
				printf("  ");
			}
		}
		for(int j=11-i; j>=6; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
}