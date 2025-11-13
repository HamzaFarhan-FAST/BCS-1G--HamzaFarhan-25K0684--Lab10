#include <stdio.h>
#include <string.h>

int main(){
	
	char word[4][10] = {
		"APPLE",
		"GRAPES",
		"BANANA",
		"ORANGE"
	};
	int i,j;
	for(i =0; i < 4; i++){
		printf("%s\n", word[i]);
		int length = strlen(word[i]);
		printf("The Length of the word is: %d\n", length);
		for(j =0; word[i][j] != '\0'; j++){
			printf(" %c\n", word[i][j]);
			
			
		}
	}	
	
}
