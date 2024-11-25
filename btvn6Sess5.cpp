#include<stdio.h>
int main(){
	int c;
	float a;
	float b;
	printf("nhap vao 2 so bat ki: ");
	scanf("%f %f",&a,&b);
	
	while(c!=5){
		printf("\nCALCULATOR\n  1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n lua chon cua ban: \n");
		scanf("%d", &c);
		switch(c){
			case 1:
				printf("%f+%f=%f",a,b,a+b);
				break;
			case 2:
				printf("%f-%f=%f",a,b,a-b);
				break;
			case 3:
				printf("%f*%f=%f",a,b,a*b);
				break;
			case 4:
				printf("%.2f/%.2f=%.2f",a,b,a/b);
				break;
			default:
				printf("so nhap khong hop le");
		}
	}
	return 0;
}
