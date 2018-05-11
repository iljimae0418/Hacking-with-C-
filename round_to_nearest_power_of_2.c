#include <stdio.h>
#include <stdlib.h> 
unsigned int m(unsigned int x){
	x |= x>>1; 
	x |= x>>2; 
	x |= x>>4; 
	x++;
	return (x>>1); 
}
int main(){
	printf("%u\n",m(88)); 
	printf("%u\n",m(22)); 
	return 0; 
}
