#include <stdio.h>
#include <stdlib.h>
int main(){

	char name[64];
	printf("Enter your name\n");
	scanf("%s", name);
	printf("Welcome mr.%s\n", name);
	return 0;
}

