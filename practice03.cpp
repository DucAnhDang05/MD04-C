#include<stdio.h>
int main(){
	int number1,number2;
	char calculation;
	printf("Nhap vao hai so nguyen: ");
	scanf("%d %d",&number1,&number2);
	fflush(stdin);
	printf("Nhap vao phep tinh: ");
	calculation=getchar();
	switch(calculation){
		case '+':
			printf("Tong cua %d va %d la %d\n",number1,number2,number1+number2);
		break;
		case '-':
			printf("Hieu cua cua %d va %d la %d\n",number1,number2,number1-number2);
		break;
		case '*':
			printf("Tich cua %d va %d la %d\n",number1,number2,number1*number2);
		break;
		case '/':
			printf("Thuong cua %d va %d la %d\n",number1,number2,number1/number2);
		break;
		case '%':
			printf("Chia lay phan du cua %d va %d la %d\n",number1,number2,number1%number2);
		break;
		default:
			printf("Phep tinh bi loi\n");
			
	}
}
