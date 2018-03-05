#include <stdio.h> 
#include <string.h> 
int main(){
	char buf[32];  
	char key[] = "d3m0_pr0gra4m_k3y"; 
	puts("Please input the passphrase."); 
	fgets(buf,sizeof(buf),stdin); 
	strtok(buf,"\n"); 
	if (!strcmp(buf,key)){
		puts("Congratulations! Your flag is ctf4b{7h15_15_51mpl3_ltrace}");   
	}else{
		puts("Invalid input"); 
	}
	return 0; 
}
