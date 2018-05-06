#include <dirent.h> 
#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
const char *path = "."; 
int txt_file_only(const struct dirent *info){
	char *ext = strrchr(info->d_name,'.'); 
	if (ext == NULL){
		return 0; 
	}
	if (strcmp(ext,".txt") == 0){
		return 1; 
	}
	return 0; 
}
int main(){
	struct dirent **namelist; 
	int count,idx; 
	if ((count = scandir(path,&namelist,txt_file_only,alphasort)) == -1){
		fprintf(stderr,"%s Directory scan error: %s\n",path,strerror(errno)); 
		return 1; 
	}
	for (idx = 0; idx < count; idx++){
		printf("%s\n",namelist[idx]->d_name);  
	}
	// data memory freeing 
	for (idx = 0; idx < count; idx++){
		free(namelist[idx]); 
	}
	// free namelist 
	free(namelist); 
	return 0; 
}
