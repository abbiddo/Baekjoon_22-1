/**
프로그램명 : 6064.cpp
설명 : 카잉 달력 
작성일시 : 2022.02.19
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,M,N,x,y,k;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>>M>>N>>x>>y;
		k=0;x--;y--;
		
		for (int j=x;j<(M*N);j+=M){
			if (j%N==y){
				cout<<j+1<<"\n";
				k=1;
				break;
			}
		}
		if (!k) cout<<"-1\n";
	} 
}

/**
실행 결과 
3
10 12 3 9
10 12 7 2
13 11 5 6
-----
33
-1
83

**/  
