#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <assert.h> 
int main(){
	int size = 2; 
	char **arr = (char **)malloc(size*sizeof(char *));  
	assert(arr != NULL);  
	arr[0] = "beef"; 
	arr[1] = "lamb";  
	char *temp[size]; 
	for (int i = 0; i < size; i++){
		temp[i] = arr[i];  
	}
	arr = (char **)realloc(arr,2*size*sizeof(char *)); 
	assert(arr != NULL);  
	for (int i = 0; i < size; i++){
		arr[i] = temp[i];  
	}
	arr[size] = "chicken"; 
	for (int i = 0; i < size+1; i++){
		puts(arr[i]); 
	}
	free(arr); 
	return 0; 
}
