/**
프로그램명 : 10845.cpp
설명 : queue
작성일시 : 2022.02.09
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	queue<int> q;
	int a,n;
	string s;
	cin>>a;
	
	for (int i=0;i<a;i++){
		cin>>s;
		if (s=="push"){
			cin>>n;
			q.push(n);
		}
		else if (s=="pop"){
			if (q.empty()==1) cout<<-1<<'\n';
			else{
				cout<<q.front()<<'\n';
				q.pop();
			}
		}
		else if (s=="size") cout<<q.size()<<'\n';
		else if (s=="empty") cout<<q.empty()<<'\n';
		else if (s=="front"){
			if (q.empty()==1) cout<<-1<<'\n';
			else cout<<q.front()<<'\n';
		}
		else if (s=="back"){
			if (q.empty()==1) cout<<-1<<'\n';
			else cout<<q.back()<<'\n';
		}
	}
}

/**
15           (입력) 
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front
1          (출력) 
2
2
0
1
2
-1
0
1
-1
0
3

**/
