/**
프로그램명 : 16953.cpp
설명 : A -> B 
작성일시 : 2022.02.26
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;

long long a,b;

void bfs(){
	queue<pair<long long, long long>> q;
	q.push({a,1});
	while(!q.empty()){
		long long n=q.front().first;
		long long t=q.front().second;
		q.pop();
		
		if (n==b){
			cout<<t;
			return;
		}
		else if (n>b*b){
			cout<<-1;
			return;
		}
		
		if (n*2<=1000000000){
			q.push({n*2,t+1});
		}
		
		if (n*10+1<=1000000000){
			q.push({n*10+1,t+1});
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>a>>b;
	bfs();
}

/**
실행 결과
2 162
-----
5
**/  
