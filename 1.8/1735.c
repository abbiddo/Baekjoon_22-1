/**
프로그램명 : 1735.cpp
설명 : (기약)분수 합 
작성일시 : 2022.01.08
작성자 : 정소영
**/

#include <iostream>
using namespace std;
int main(){
	int a,aa,b,bb,i=2;
	cin>>a>>aa>>b>>bb;
		
	a*=bb;
	b*=aa;
	a+=b;
	
	aa*=bb;
	
	while(1){
		if (aa%i==0 && a%i==0) {
			aa/=i;
			a/=i;
			i=2;
		}
		i++;
		if (i>aa && i>a) break;
	}
	
	cout<<a<<" "<<aa;
}

/**
1 3  (입력) 
2 6
2 3  (출력) 
**/ 
