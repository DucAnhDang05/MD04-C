#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("Nhap vao cac gia tri: ");
	scanf("%d %d %d", &number1, &number2, &number3);
	int max=number1;
	int min=number1;
	max=(max<number2)?number2:max;
	max=(max<number3)?number3:max;
	min=(min>number2)?number2:min;
	min=(min>number3)?number3:min;
	if(max==number1&&min==number2){
		printf("%d %d %d",number1,number3,number2);
	}else if(max==number1&&min==number3){
		printf("%d %d %d",number1,number2,number3);
	}else if(max==number2&&min==number3){
		printf("%d %d %d",number2,number1,number3);
	}else if(max==number2&&min==number1){
		printf("%d %d %d",number2,number3,number1);
	}else if(max==number3&&min==number2){
		printf("%d %d %d",number3,number1,number2);
	}else if(max==number3&&min==number1){
		printf("%d %d %d",number3,number2,number1);
	}
}
		
