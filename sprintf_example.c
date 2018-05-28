#include <stdio.h>
#include <stdlib.h> 
int main(){
	char buffer[256]; 
	char name[20] = "Luke";
	int num = 23; 
	double level = 2.37;  
	sprintf(buffer,"name : %s, number : %d, level : %f",name,num,level); 
	puts(buffer); 
	return 0;  
}
