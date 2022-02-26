/**
프로그램명 : 1244.cpp
설명 : 스위치 켜고 끄기 
작성일시 : 2022.02.26
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

bool sw[101];
int n,p,s,k;

void male(int k){
	for (int i=k;i<=n;i+=k) sw[i]=!sw[i];
}

void female(int k){
	for (int i=0;i<=n/2;i++){
		if (k-i==0 || k+i==n+1) break;
		if (i==0) sw[k]=!sw[k];
		else if (sw[k-i]==sw[k+i]){
			sw[k-i]=!sw[k-i];
			sw[k+i]=!sw[k+i];
		}
		else break;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=1;i<=n;i++) cin>>sw[i];
	
	cin>>p;
	for (int i=0;i<p;i++){
		cin>>s>>k;
		if (s==1) male(k);
		else female(k);	
	}
	
	for (int i=1;i<=n;i++) {
		cout<<sw[i]<<" ";
		if (i%20==0) cout<<"\n";
	}
}

/**
실행 결과
8
0 1 0 1 0 0 0 1
2
1 3
2 3
-----
1 0 0 0 1 1 0 1
**/  
