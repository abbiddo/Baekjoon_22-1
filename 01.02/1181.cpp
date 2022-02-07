/**
프로그램명 : 1181.cpp
설명 : 단어 정렬 
작성일시 : 2022.01.02 -> 02.07
작성자 : 정소영
**/

#include <iostream>
#include <algorithm>
using namespace std;
string word[20000];

int compare(string a, string b){
	if (a.length()==b.length()) return a<b;
	else return a.length()<b.length();
}

int main(){
	int n;
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>word[i];
	
	sort(word,word+n,compare);
	
	for (int i=0;i<n;i++){
		if (word[i]==word[i-1]) continue;
		cout<<word[i]<<'\n';
	}
}

/**
실행 결과
13       (입력) 
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours
i        (출력)
im
it
no
no
but
more
more
wait
wont
yours
cannot
hesitate

**/ 
