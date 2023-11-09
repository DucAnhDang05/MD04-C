#include<stdio.h>
int main(){
	float markHtml,markCss,markJavascript;
	printf("Nhap diem html,css,javascript: ");
	scanf("%f %f %f",&markHtml,&markCss,&markJavascript);
	float avgMark=(markHtml+markCss+markJavascript)/3;
	if (avgMark<5){	
	printf("Hoc sinh Yeu");	
	}else if(avgMark<7){
	printf("Hoc sinh Trung Bình");
	}else if(avgMark<8){
	printf("Hoc sinh Kha");
	}else if(avgMark<9){
	printf("Hoc sinh Gioi");
	}else{
	printf("Hoc sinh Xuat Sac");
	}
}

