/**
프로그램명 : 16953.cpp
설명 : A -> B 
작성일시 : 2022.02.26 -> 27
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;

long long a,b,k;

int bfs(){
	queue<pair<long long, long long>> q;
	q.push({a,1});
	while(!q.empty()){
		long long n=q.front().first;
		long long t=q.front().second;
		q.pop();
		
		if (n==b){
			return t;
		}
		
		if (n*2<=b){
			q.push({n*2,t+1});
		}
		
		if (n*10+1<=b){
			q.push({n*10+1,t+1});
		}
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long aa,bb;
	cin>>a>>b;
	aa=a;bb=b;
	while(bb){
		k++;
		bb/=2;
	}
	cout<<bfs();
}

/**
실행 결과
2 162
-----
5
**/  
