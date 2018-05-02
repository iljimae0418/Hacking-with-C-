#include <stdio.h>
int main(){
	int k = 15; // 1111 
	int n = 2; // let's say we are unsetting the third bit (from the right)
	k = k & ~(1<<n); 
	printf("%d\n",k); // 1011 = 11 
	return 0;  
}
