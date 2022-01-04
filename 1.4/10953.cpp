/**
프로그램명 : 10953.cpp
설명 : A+B 
작성일시 : 2022.01.04
작성자 : 정소영
**/

#include <iostream> 
int main(){
	char a[1000][3];
	int i,n;
	std::cin>>n;
	
	for (i=0;i<2*n;i+=2) std::cin>>a[i];
	for (i=0;i<2*n;i+=2) std::cout<<a[i][0]+a[i][2]-96<<"\n";  // 아스키코드 값으로 계산하기 때문에 -96 
}

/**
5   (입력) 
1,1
2,3
3,4
9,8
5,2
2   (츨력) 
5
7
17
7

**/ 
