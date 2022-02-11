/**
프로그램명 : 1966.cpp
설명 : 우선순위 큐 
작성일시 : 2022.02.11
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m,k,a,cnt=0;
	cin>>n;
	
	for (int i=0;i<n;i++){
		priority_queue<int> pq;
		queue<pair<int, int>> q;
		cnt=0;
		cin>>m>>k;
		
		for (int j=0;j<m;j++){
			cin>>a;
			q.push({j,a});
			pq.push(a);
		}
		
		while(1){
			int index=q.front().first;
			int value=q.front().second; // pair queue를 이용했을 때 안에 접근하는 방법 
			
			if (value==pq.top()){
				cnt++;
				pq.pop();
				q.pop();
				
				if (index==k) {cout<<cnt<<"\n"; break;}
			} 
			
			else{
				q.pop();
				q.push({index,value});
			}
		}	
	}
}

/**
3                 (입력) 
1 0
5
4 2
1 2 3 4
6 0
1 1 9 1 1 1
1                 (출력) 
2
5

**/  
