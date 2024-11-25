#include<stdio.h>
int main(){
	int a;
	printf("nhap 1 so nguyen tu 1 den 10: ");
	scanf("%d",&a);
	for(int b=0; b==10; b++){
		printf("%d * %d = %d", a, b, a*b);
	}
	
	return 0;
}
