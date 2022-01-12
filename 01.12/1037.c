/**
프로그램명 : 1037.cpp
설명 : 진짜 약수 
작성일시 : 2022.01.12
작성자 : 정소영
**/

#include <iostream>
using namespace std;
int main(){
	int n[50],nn,i,j=4;
	long long k;
	cin>>nn;
	
	for (i=0;i<nn;i++) cin>>n[i];
	
	if (nn==1) cout<<n[0]*n[0];
	
	while(1){
		k=0;
		for (i=0;i<nn;i++){
			if (j==n[i]) break;
			if (j%n[i]==0) k++;
		}
		j++;
		if (k==nn) break;
	}	
	cout<<j-1;
}
