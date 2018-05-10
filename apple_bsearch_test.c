#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <assert.h> 
void *apple_bsearch(const void *key,const void *base,size_t nmemb,size_t width,int (*compar)(const void *,const void *)){ 
    void *p = NULL; 
    for (size_t nremain = nmemb; nremain != 0; nremain >>= 1){
		p = (char *)base + (nremain>>1)*width;  
        int sign = compar(key,p); 
        if (sign == 0){
            return p; 
        } 
        if (sign > 0){
            base = (char *)p + width;  
            nremain--; 
        } // else move left 
    } 
    return p;  
}
int cmp_int(const void *p, const void *q)
{
    int first = *(const int *)p, second = *(const int *)q;
    return first - second;
}

int main(){
	int a[2] = {1,2}; 
	int key = 3; 
	int *pos = apple_bsearch(&key,a,2,sizeof(a[0]),cmp_int); 
	printf("%ld\n",pos-a); 
	return 0;  
}
