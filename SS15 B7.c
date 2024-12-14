#include <stdio.h>

int main(){
	char arr[]="duydepzai8386@gmail.com";
	int length=strlen(arr);
	int a,b,c;
	for(int i=0;i<length;i++){
		if(isalpha(arr[i])){
			a++;
		}else if(isalnum(arr[i])){
			b++;
		}else{
			c++;
		}
	}
	printf("so phan tu la chu %d\n",a);
	printf("so phan tu la so %d\n",b);
	printf("so phan tu la ki tu dac biet %d\n",c);
	return 0;
} 
