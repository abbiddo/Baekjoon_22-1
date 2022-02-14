/**
프로그램명 : 9375.cpp
설명 : 패션왕 (문자열 탐색, 개수)
작성일시 : 2022.02.14
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
string w[30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a;
	int n,m;
	
	cin>>n;
	
	for (int i=0;i<n;i++){
		int re=1,k=0,c[30]={0};
		cin>>m;
		
		for (int j=0;j<m;j++){
			cin>>a;
			cin>>w[j];
		}
		
		sort (w,w+m);
		
		if (m!=0) c[k]+=1;
		for (int j=1;j<m;j++){
			if (w[j]==w[j-1]) c[k]+=1;
			else c[++k]+=1;
		}
		
		for (int j=0;j<=k;j++) re*=(c[j]+1);
		cout<<re-1<<"\n";
	}
}

/**
2        (입력)
3
hat headgear
sunglasses eyewear
turban headgear
3
mask face
sunglasses face
makeup face
5        (출력)
3

**/  
