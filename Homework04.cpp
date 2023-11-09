#include<stdio.h>
int main(){
	int year=2023,month,days;
	printf("Nhap vao man hinh so thang: ");
	scanf("%d",&month);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;
		case 2:
			if((year%4==0&&year%100==0)||(year%400==0)){
				days=29;
			}else{
				days=28;
			} 
				
			break;
		default:
			printf("Thang khong hop le \n");
	}
	printf("So ngay trong thang %d la %d \n",month,days);
}
