#include <stdio.h>

int main(){
	int a;
	int b;
	printf("nhap vao 2 so:\n");
	scanf("%d %d",&a,&b);
	
	while(a!=b){
		if(a>b){
			a-=b;
		}else if(a<b){
			a-=b;
		}
	}
	printf("uoc chung lon nhat: %d",a);
	
	return 0;
}
