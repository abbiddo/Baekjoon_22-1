/**
프로그램명 : 1063.cpp
설명 : 킹 (좌표) 
작성일시 : 2022.02.16
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,kr,sr;
	char kc,sc;
	string m;
	
	cin>>kc>>kr>>sc>>sr>>n;
	kr=kr+(kc-64)*10;
	sr=sr+(sc-64)*10;
	
	for (int i=0;i<n;i++){
		cin>>m;
		
		if (m=="R"){
			if(kr<80) kr+=10;
			if (kr==sr){
				if (kr<80) sr+=10;
				else kr-=10;
			}
		}
		else if (m=="L"){
			if(kr>20) kr-=10;
			if (kr==sr){
				if (kr>20) sr-=10;
				else kr+=10;
			}
		}
		else if (m=="B"){
			if(kr%10>1) kr-=1;
			if (kr==sr){
				if (kr%10>1) sr-=1;
				else kr+=1;
			}
		}
		else if (m=="T"){
			if(kr%10<8) kr+=1;
			if (kr==sr){
				if (kr%10<8) sr+=1;
				else kr-=1;
			}
		}
		else if (m=="RT"){
			if(kr%10<8 && kr<80) kr+=11;
			if (kr==sr){
				if (kr%10<8 && kr<80) sr+=11;
				else kr-=11;
			}
		}
		else if (m=="LT"){
			if (kr%10<8) {
				kr+=1;
				if (kr>20) kr-=10;
				else kr-=1;
			}
			
			if (kr==sr){
				if (kr%10<8) {
					sr+=1;
					if (kr>20) sr-=10;
					else {
						sr-=1;
						kr+=9;
					}
				}
				else kr+=9;
			}
		}
		else if (m=="RB"){
			if (kr%10>1){
				kr-=1;
				if (kr<80) kr+=10;
				else kr+=1;
			}
			
			if (kr==sr){
				if (kr%10>1){
					sr-=1;
					if (kr<80) sr+=10;
					else{
						sr+=1;
						kr-=9;
					}
				}
				else kr-=9;
			}
		}
		else if (m=="LB"){
			if(kr%10>1 && kr>20) kr-=11;
			if (kr==sr){
				if (kr%10>1 && kr>20) sr-=11;
				else kr+=11;
			}
		}
	}
	
	kc=kr/10+64;
	sc=sr/10+64;
	cout<<kc<<kr%10<<"\n"<<sc<<sr%10;
}

/**
A1 A2 5
B
L
LB
RB
LT
-----
A1
A2
**/  
