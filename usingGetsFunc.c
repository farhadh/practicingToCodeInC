#include <stdio.h>

int len(char str[]){
	int i = 0;
	
	while(str[i] != '\0' ){
		i++;
	}

	return i;
}


int main(){

	char str[70];

	printf("Please enter your sentence: ");
	gets(str);
	
	int length = len(str);

	for(int i=0;i<length;i+=2){
		str[i] = 'X';
	}
	
	printf("%s\n", str);


	return 0;
}
