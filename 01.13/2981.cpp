/**
프로그램명 : 2981.cpp
설명 : 나머지를 같게하는 수 찾기 
작성일시 : 2022.01.13
작성자 : 정소영
**/

#include <iostream>
using namespace std;
int main(){
	int n,i,re,max=0,cnt=0;
	long long a[100];
	
	cin>>n;

	for (i=0;i<n;i++){
		cin>>a[i];
		if (a[i]>max) max=a[i];
	}
	
	for (re=2;re<max;re++){
		cnt=0;
		for (i=0;i<n-1;i++){
			if (a[i]%re==a[i+1]%re) cnt++;
		}
		if (cnt==n-1) cout<<re<<" ";
	}
}

/**
3    (입력) 
6
34
38
2 4  (출력) 
**/ 
