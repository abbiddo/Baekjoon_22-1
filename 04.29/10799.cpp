/**
프로그램명 : 10799.cpp
설명 : 쇠막대기 
작성일시 : 2022.04.29
작성자 : 정소영 
**/

#include <iostream>
#include <string> 
#include <stack>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int len=s.length();
	
	stack<char> st;
	int prec=0;
	
	int cnt=0;
	for (int i=0;i<len;i++){
		if (s[i]=='(') st.push(s[i]);
		else{			
			if (s[i-1]=='('){
				st.pop();
				cnt+=st.size();
			}
			else {
				st.pop();
				cnt++;
			}
		}
	}
	cout<<cnt;
}

/**
실행 결과 
(((()(()()))(())()))(()())
-----
24
**/  
