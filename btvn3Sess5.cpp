#include<stdio.h>
int main(){
	int b;
	int d;
	int a;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&a);
	for(b>=a; b++){
		for(int c=0; c>=a; c++){
			printf("%d=%d+%d", c+b, c, b);
		}
	}
	printf("%d", d);
	
	return 0;
	
}
