/**
프로그램명 : 11286.cpp
설명 : 절댓값 힙 
작성일시 : 2022.02.15
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	priority_queue<int, vector<int>, greater<int>> q;
	priority_queue<int> mq;
	
	int n,k;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>>k;
		if (k<0) mq.push(k);
		else if (k>0) q.push(k);
		else {
			if (mq.size()==0 && q.size()==0) cout<<0<<"\n";
			else if (mq.size()!=0 && q.size()==0){
				cout<<mq.top()<<"\n";
				mq.pop();
			}
			else if (q.size()!=0 && mq.size()==0){
				cout<<q.top()<<"\n";
				q.pop();
			}
			else{
				if (abs(mq.top())<=q.top()){
					cout<<mq.top()<<"\n";
					mq.pop();
				}
				else{
					cout<<q.top()<<"\n";
					q.pop();
				}
			}
		}
	}
}

/**
18
1
-1
0
0
0
1
1
-1
-1
2
-2
0
0
0
0
0
0
0
-----
-1
1
0
-1
-1
1
1
-2
2
0

**/  
