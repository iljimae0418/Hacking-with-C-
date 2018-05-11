#include <stdio.h>
#include <stdlib.h>

int cnt(unsigned int x){
	int c; 
	for (c = 0; x; c++){
		x &= x-1; 
	}
	return c; 
}
int main(){
	for (int i = 1; i <= 10; i++){
		printf("%d\n",cnt(i)); 
	}
	return 0; 
}
