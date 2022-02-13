/**
프로그램명 : 18870.cpp
설명 : 좌표 압축 
작성일시 : 2022.02.12
작성자 : 정소영 
**/

#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
string po[100000];
string q;

class coo{
	public:
		long long a;
		long long n;
};

coo *c=new coo[1000000];

int ca(coo aa, coo bb){
	return aa.a<bb.a;
}

int cn(coo aa, coo bb){
	return aa.n<bb.n;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num,k=0;
	cin>>num;
	
	for (int i=0;i<num;i++){
		cin>>c[i].a;
		c[i].n=i;
	}
	
	sort(c,c+num,ca);
	
	for (int i=0;i<num;i++){
		if (c[i].a==c[i+1].a) c[i].a=k;
		else c[i].a=k++;
	}
	
	sort(c,c+num,cn);
	
	for (int i=0;i<num;i++) cout<<c[i].a<<" ";
}

/**
5          (입력)
2 4 -10 4 -9
2 3 0 3 1  (출력)
**/  
