// just some random c code. 
#include <stdio.h> 
#include <string.h> 

void change(int *k){
	*k = 7;  
}

int main(){
	int k = 10; 
	printf("%d\n",k);  
	change(&k); 
	printf("%d\n",k);   
	char stuff[12] = {'a','b','c'};  
	printf("%d\n",(int)strlen(stuff)); 
	return 0; 
}
