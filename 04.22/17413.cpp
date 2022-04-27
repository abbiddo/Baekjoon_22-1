/**
프로그램명 : 17413.cpp
설명 : 단어 뒤집기2 
작성일시 : 2022.04.27
작성자 : 정소영 
**/

#include <iostream>
#include <string> 
#include <stack>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	
	int len=s.length();
	
	stack<char> st;
	int prec=0;
	for (int i=0;i<len;i++){
		if (s[i]==' '){
			while(!st.empty()) {
				cout<<st.top();
				st.pop();
			}
			cout<<" ";
		}
		else if (s[i]=='<'){
			prec=1;
			while(!st.empty()) {
				cout<<st.top();
				st.pop();
			}
			cout<<'<';
		}
		else if (s[i]=='>'){
			prec=0;
			cout<<'>';
		}
		else if (prec==1) cout<<s[i];
		else{
			st.push(s[i]);
		}
	}
	while(!st.empty()) {
		cout<<st.top();
		st.pop();
	}
}

/**
실행 결과 
<   space   >space space space<    spa   c e>
-----
<   space   >ecaps ecaps ecaps<    spa   c e>
**/  
