#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	int temp = *a;  
	*a = *b; 
	*b = temp; 
}
void swap_many_ints(int *first,int *second,int length){
	for (int i = 0; i < length; i++){
		swap(first+i,second+i); // or swap(&first[i],&second[i])  
	}
}
int main(){
	int a[5] = {1,2,3,4,5}; 
	int b[5] = {6,7,8,9,10};  
	swap_many_ints(a,b,5); 
	for (int i = 0; i < 5; i++){
		printf("%d\n",a[i]); // notice that contents of a has been swapped with that of b's
	}
	return 0; 
}
