/**
프로그램명 : 2743.cpp
설명 : 문자열 길이 
작성일시 : 2022.01.04
작성자 : 정소영
**/

#include <iostream>
int main(){
	char a[100];
	int i,cnt=0;
	
	std::cin>>a;
	
	for (i=0;a[i]!=0;i++)
		cnt+=1;
		
	std::cout<<cnt;
}

/**
pulljima
8
**/ 
