/**
프로그램명 : 9663.cpp
설명 : N-Queen
작성일시 : 2022.03.13
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,count;
int arr[14];
int vs[14];

int line(int a, int b){
	for (int i=1;i<=a;i++){
		if (arr[a-i]==b-i) return 0;
		if (arr[a-i]==b+i) return 0;
	}
	return 1;
}

void search(int cnt){
	if(cnt==n){
		count++;
		return;
	}
	for (int i=0;i<n;i++){
		if (!vs[i]){
			vs[i]=1;
			arr[cnt]=i;
			if (line(cnt,i)) search(cnt+1);
			vs[i]=0;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	search(0);
	
	cout<<count;
}

/**
실행 결과 
8
-----
92
**/ 
