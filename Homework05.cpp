#include <stdio.h>
int main(){
	int date,month,year;
	printf("Nhap ngay thang nam: ");
	scanf("%d %d %d", &date,&month,&year);
	if(year<0){
		printf("Nam khong hop le");
	}else if(month<1||12<month){
		printf("Thang khong hop le");
	}
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(date<0||date>31){
				printf("Ngay khong hop le");
			}
			break;
		case 2:
			if(year%4==0 && year%100!=0){
			}else if(date<0||date>29){
				printf("Ngay khong hop le");
			}else if(date<0||date>28){
				printf("Ngay khong hop le");
			}
			break;
	}
		printf("Ngay thang nam hop le\n");
}
