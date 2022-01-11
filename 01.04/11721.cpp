/**
프로그램명 : 11721.cpp
설명 : 문자열 10개씩 끊어 출력하기 
작성일시 : 2022.01.04
작성자 : 정소영
**/

#include <iostream> 
int main(){
	char a[100];
	int i=0;
	
	std::cin>>a;
	
	while(a[i]){
		std::cout<<a[i];
		i++;
		if (i%10==0) std::cout<<"\n";
	}
}

/**
OneTwoThreeFourFiveSixSevenEightNineTen
OneTwoThre
eFourFiveS
ixSevenEig
htNineTen
**/ 
