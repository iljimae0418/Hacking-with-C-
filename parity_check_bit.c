#include <stdio.h>
#include <stdlib.h>
int main(){
	int n; 
	scanf("%d",&n);
	if (n&1){
		puts("odd"); 
	}else{
		puts("even"); 
	}
	return 0; 
}
