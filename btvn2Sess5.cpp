#include<stdio.h>
int main(){
	int a;
	while(1){
		printf("nhap so can tim: ");
		scanf("%d",&a);
		if(a==5){
			break;
		}else{
			printf("nhap lai\n");
		}
	}
	
	return 0;
}
