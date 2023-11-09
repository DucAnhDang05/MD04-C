#include<stdio.h>
int main(){
	int oldNumber=0,newNumber,electricPrice;
	printf("Nhap vao so dien: ");
	scanf("%d",&newNumber);
	int electricNumber=newNumber-oldNumber;
	if(electricNumber<50){
		electricPrice=10000*electricNumber;
	}else if(electricNumber<100){
		electricPrice=15000*electricNumber;
	}else if(electricNumber<150){
		electricPrice=20000*electricNumber;
	}else if(electricNumber<200){
		electricPrice=25000*electricNumber;
	}else{
		electricPrice=30000*electricNumber;
	}
	printf("Gia tien la: %d \n",electricPrice);
}

