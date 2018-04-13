#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char *str = malloc(21);  
	strcpy(str,"binky");  
	str[0] = 'c'; 
	printf("%s\n",str); 
	free(str); 
	char a[] = "Luke Kim";  
	a[2] = 'l'; 
	printf("%s\n",a); 
	char *s = "fixed"; // this string cannot be modified with s[i] = some character
	return 0; 
}
