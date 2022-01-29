/**
프로그램명 : 2859.c
설명 : 별 관찰 
작성일시 : 2022.01.29
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int hour,h,m,hh,mm,hhh,mmm,hhhh,mmmm,i;
	scanf("%d:%d",&h,&m);
	scanf("%d:%d",&hh,&mm);
	scanf("%d:%d",&hhh,&mmm);
	scanf("%d:%d",&hhhh,&mmmm);
	
	h=(h*60+m);
	hh=(hh*60+mm);
	hhh=(hhh*60+mmm);
	hhhh=(hhhh*60+mmmm);
	
	hour=h<hh?hh:h;
	
	for (i=hour;i<=864000;i++){
		if ((i-h)%hhh==0 && (i-hh)%hhhh==0){
			switch((i/1440)%7){
				case 0:
					printf("Saturday");
					break;
				case 1:
					printf("Sunday");
					break;
				case 2:
					printf("Monday");
					break;
				case 3:
					printf("Tuesday");
					break;
				case 4:
					printf("Wednesday");
					break;
				case 5:
					printf("Thursday");
					break;
				case 6:
					printf("Friday");
					break;
			}
			i%=1440;
			printf("\n%02d:%02d",i/60,i%60);
			return 0;
		}
	}
	
	printf("Never");
}

/**
실행 결과
23:19
10:19
02:42
09:11
Thursday
00:31
**/
