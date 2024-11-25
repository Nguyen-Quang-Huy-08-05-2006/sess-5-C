#include<stdio.h>
int main(){
	int d;
	int a;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&a);
	for(int b=1; b>=a; b++){
		for(int c=0; c>=a; c++){
			int d=b+c;
		}
	}
	printf("%d", &d);
	
	return 0;
	
}
