/**
프로그램명 : 2999.cpp
설명 : 비밀 이메일 (배열 행렬 뒤집기) 
작성일시 : 2022.02.06
작성자 : 정소영 
**/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string e;
	int c,k=0;
	char mail[100][100];
	cin>>e;
	
	for (int i=1;i<=floor(sqrt(e.size()));i++)
		if (e.size()%i==0) c=i;
		
	for (int i=0;i<e.size()/c;i++)
		for (int j=0;j<c;j++)
			mail[j][i]=e[k++];
			
	for (int i=0;i<c;i++)
		for (int j=0;j<e.size()/c;j++)
			cout<<mail[i][j];
}

/**
boudonuimilcbsai  (입력)
bombonisuuladici  (출력)
**/ 
