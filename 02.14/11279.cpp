/**
프로그램명 : 11279.cpp
설명 : 힙 (우선순위 큐로 해결) 
작성일시 : 2022.02.14
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int set[21]={0}; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	priority_queue<int> q;
	int n,k;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>>k;
		if (k==0){
			if (q.size()==0) cout<<0<<"\n";
			else {
				cout<<q.top()<<"\n";
				q.pop();
			}
		}
		else q.push(k);
	}
}

/**
13
0
1
2
0
0
3
2
1
0
0
0
0
0
-----
0
2
1
3
2
1
0
0

**/  
