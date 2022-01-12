/**
프로그램명 : 1037.cpp
설명 : 진짜 약수 
작성일시 : 2022.01.12
작성자 : 정소영
**/

#include <iostream>
using namespace std;
int main(){
	int n[50],nn,i,j=4,temp;
	cin>>nn;
	
	for (i=0;i<nn;i++) cin>>n[i];
	
	if (nn==1) cout<<n[0]*n[0];
	
	else{	
		for (i=0;i<nn-1;i++)
			for (j=0;j<nn-i-1;j++)
				if (n[j]>n[j+1]){
					temp=n[j];
					n[j]=n[j+1];
					n[j+1]=temp;
				}
		cout<<n[0]*n[nn-1];
	}
}

/**
14      (입력) 
14 26456 2 28 13228 3307 7 23149 8 6614 46298 56 4 92596
185192  (출력) 
**/ 
