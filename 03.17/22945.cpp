/**
프로그램명 : 22945.cpp
설명 : 팀 빌딩 
작성일시 : 2022.03.17
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,s,e,m;
int arr[100000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++) cin>>arr[i];
	e=n-1;
	
	while(s<e-1){
		m=max(m,min(arr[s],arr[e])*(e-s-1));
		if (arr[s]<arr[e]) s++;
		else e--;
	}
	
	cout<<m;
}

/**
실행 결과 
4
1 4 2 5
-----
4
**/  
