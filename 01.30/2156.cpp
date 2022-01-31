/**
프로그램명 : 2156.cpp
설명 : 포도주 시식 
작성일시 : 2022.01.30
작성자 : 정소영
**/

#include <iostream>
using namespace std;
int main(){
	int n,i,j,k,sum=0,m,cur;
	int w[10000]={0};
	int re[3]={0};
	
	cin>>n;
	
	for (i=0;i<n;i++){
		cin>>w[i];
		sum+=w[i];
	}
		
	for (i=0;i<3;i++){
		re[i]=w[i];
		cur=i+1;
		while(cur<=n-3){
			m=1001;
			for (j=cur;j<cur+3;j++){
				if (m>=w[j]){
					m=w[j];
					k=j;
				}
			}
			re[i]+=m;
			cur=k+1;
		}
	}
	cout<<sum-min(re[0],min(re[1],re[2]));
}

/**
6          (입력) 
6
10
13
9
8
1
33         (출력) 
**/ 
