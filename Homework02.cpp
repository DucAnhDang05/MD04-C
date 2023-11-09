#include<stdio.h>
int main(){
	float a,b,c;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%f %f %f",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a){
		if(a==b==c){
			printf("Day la tam giac deu");
		}else if(a==b||a==c||b==c){
			printf("Day la tam giac can");
		}else if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b){
			printf("Day la tam giac vuong");
		}else if((a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)&&(a==b||a==c||b==c)){
			printf("Day la tam giac vuong can");
		}else{
			printf("Day la tam giac thuong");
		}
	}else{
		printf("Day khong phai 3 canh cua 1 tam giac");
}
}
	
	
	
