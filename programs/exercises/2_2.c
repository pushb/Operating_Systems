#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int i = 1;
	while(i<100){
	printf("%d\n", i);
	sleep(1);
	i++;
	}
	return 0;
}

