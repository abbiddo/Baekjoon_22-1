/**
프로그램명 : 10866.cpp
설명 : deque
작성일시 : 2022.02.09
작성자 : 정소영 
**/

#include <iostream>
#include <deque>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	deque<int> d;
	int a,n;
	string s;
	cin>>a;
	
	for (int i=0;i<a;i++){
		cin>>s;
		if (s=="push_front"){
			cin>>n;
			d.push_front(n);
		}
		else if (s=="push_back"){
			cin>>n;
			d.push_back(n);
		}
		else if (s=="pop_front"){
			if (d.empty()==1) cout<<-1<<'\n';
			else{
				cout<<d.front()<<'\n';
				d.pop_front();
			}
		}
		else if (s=="pop_back"){
			if (d.empty()==1) cout<<-1<<'\n';
			else{
				cout<<d.back()<<'\n';
				d.pop_back();
			}
		}
		else if (s=="size") cout<<d.size()<<'\n';
		else if (s=="empty") cout<<d.empty()<<'\n';
		else if (s=="front"){
			if (d.empty()==1) cout<<-1<<'\n';
			else cout<<d.front()<<'\n';
		}
		else if (s=="back"){
			if (d.empty()==1) cout<<-1<<'\n';
			else cout<<d.back()<<'\n';
		}
	}
}

/**
15           (입력) 
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
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
