#include <stdio.h>

int is_power_of_two(unsigned int x){
	return (x == 0 ? 0 : ((x & (x-1)) == 0) ? 1 : 0);  
}
int main(){
	printf("%d\n",is_power_of_two(2)); 
	printf("%d\n",is_power_of_two(16)); 
	printf("%d\n",is_power_of_two(28)); 
	printf("%d\n",is_power_of_two(31)); 
	return 0; 
}
