/**
프로그램명 : 9461.cpp
설명 : 파도반 수열
작성일시 : 2022.02.01 -> 03
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int main(){
	long long p[101]={0,1,1,1,2,2,3,4};
	int n,k,j=8;
	cin>>n;

	for (int i=0;i<n;i++){
		cin>>k;
		if (k>=j) 
			for (int l=j;l<=k;l++) p[j++]=p[j-1]+p[j-5];
		cout<<p[k]<<'\n';
	}
}

/**
2
6
3
12
16

**/
