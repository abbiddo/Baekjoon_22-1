/**
프로그램명 : 4949.cpp
설명 : 괄호 짝 맞추기 
작성일시 : 2022.02.10
작성자 : 정소영 
**/

#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
		
	while(1){
		string s;
		int k=0,i;
		deque<int> q;
		
		getline(cin,s);
		if (s==".") break;
		
		for (i=0;i<s.size();i++){
			if (s[i]=='(') q.push_back(1);
			else if (s[i]=='[') q.push_back(2);
			else if (s[i]==')'){
				if (!q.empty()&&q.back()==1) q.pop_back();
				else{k=1;break;}
			}
			else if (s[i]==']'){
				if (!q.empty()&&q.back()==2) q.pop_back();
				else{k=1;break;}
			}
		}
		if (k==0 && q.empty()+q.empty()==2) cout<<"yes\n";
		else cout<<"no\n";
	}
}

/**
So when I die (the [first] I will see in (heaven) is a score list).
[ first in ] ( first out ).
Half Moon tonight (At least it is better than no Moon at all].
A rope may form )( a trail in a maze.
Help( I[m being held prisoner in a fortune cookie factory)].
([ (([( [ ] ) ( ) (( ))] )) ]).
 .
.
yes  (출력) 
yes
no
no
no
yes
yes

**/  
