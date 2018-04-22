#include <string.h>
#include <stdio.h>
void movepos(char **str,char buf[]){
	for (int i = 0; i < strlen(*str); i++){
		buf[i] = *(*str+i); 
		//printf("%c\n",*(*str+i));  
	}
}
int main(){
	char *str = "abcdef"; 
	char buf[10] = "dad";
	printf("buf before is: %s\n",buf);    
	movepos(&str,buf);    
	printf("buf after is: %s\n",buf);   
	return 0; 
}
