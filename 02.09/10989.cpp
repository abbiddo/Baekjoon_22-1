/**
프로그램명 : 10989.cpp
설명 : 정렬 
작성일시 : 2022.02.09
작성자 : 정소영 
**/

#include <iostream>
int num[10001]={0};
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n;
	
	for (int i=0;i<n;i++) {
		cin>>k;
		num[k]++;
	}	
	
	for (int i=1;i<=10000;i++){
		while(num[i]!=0){
			cout<<i<<"\n";
			num[i]--;
		}
	}
}

/**
10    (입력) 
5
2
3
1
4
2
3
5
1
7
1     (출력)
1
2
2
3
3
4
5
5
7
**/  
