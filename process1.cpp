#include <iostream>
#include <unistd.h> 
#include <cstdio> 
#include <cassert>
using namespace std; 	
int main(int argc, char *argv[]){
	printf("Greetings from process %d! (parent %d)\n",getpid(),getppid());  
	pid_t pid = fork(); 
	assert(pid >= 0); 
	printf("Bye-bye from process %d! (parent %d)\n",getpid(),getppid());  
	return 0;  
}
