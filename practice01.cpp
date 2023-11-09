#include<stdio.h>
int main(){
	int number;
	printf("Nhap vao mot so bat ky: ");
	scanf("%d",&number);
	if (number%2==0){
		printf("%d la so chan\n",number);		
	}else{
		printf("%d la so le\n",number);
	}
}
