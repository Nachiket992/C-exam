#include<stdio.h>
#include<string.h>

int main () {
	
	int consonant=0;
	char sentence[1000];	
	
	printf("2. Develop a C program that reads a sentence from the user. Create a function to count the occurrences of each consonant in the sentence and display the counts.\n\n");
	
	printf("Enter the sentence :- ");
	scanf("%[^\n]s", &sentence);
	printf("\n");
	
	for(int i=0; i<strlen(sentence); i++) {
	    
		if(sentence[i]!='A' && sentence[i]!='a' && sentence[i]!='E' && sentence[i]!='e' && sentence[i]!='I' && sentence[i]!='i' && sentence[i]!='O' && sentence[i]!='o' && sentence[i]!='U' && sentence[i]!='u') {
			consonant++;
		}
	}
	
	printf("Number of consonant is %d.", consonant);
	
}