#include <stdio.h>

int main(){
	char str[100];
	printf("Please enter your sentence: ");
	gets(str);

	int i=0;
	while(str[i] != '\0'){
		if(str[i]<=122 && str[i]>=97){
			str[i]-=32;
		}
		i++;
	}

	printf("Upper case version: %s.\n", str);

	return 0;
}
