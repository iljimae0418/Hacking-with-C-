#include <stdio.h> 
int ishexdigit(int ch){ // can this digit be used to represent a hex number?  
	return (ch >= '0' && ch <= '9') || ((unsigned int)ch | 32)-'a' < 6; 
}
int main(){
	printf("%d\n",ishexdigit('A')); 
	printf("%d\n",ishexdigit('N')); 
	printf("%d\n",ishexdigit('3'));  
	return 0; 
}
