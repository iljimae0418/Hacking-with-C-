#include <stdio.h> 
unsigned int countsetBits(unsigned int n){
	unsigned int count = 0; 
	while (n){
		count += n&1;  
		n >>= 1;  
	}
	return count;  
}
int main(){
	int k = 11; // 1011 
	printf("%d\n",countsetBits(k)); 
	return 0;  
}
