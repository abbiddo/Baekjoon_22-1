/**
프로그램명 : 10814.cpp
설명 : 나이순 정렬 
작성일시 : 2022.01.02 -> 02.08
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

class Person{
	public:
		int age;
		string name;
};

Person *p= new Person[100001];

bool compare(Person a, Person b){
	return a.age<b.age;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>p[i].age>>p[i].name;
	
	stable_sort(p,p+n,compare);
	
	for (int i=0;i<n;i++) cout<<p[i].age<<' '<<p[i].name<<'\n';
}

/**
3           (입력) 
21 Junkyu
21 Dohyun
20 Sunyoung 
20 Sunyoung (출력) 
21 Junkyu
21 Dohyun
**/  
