/**
프로그램명 : 1620.cpp
설명 : 이름을 입력 받고 이름 or 순서를 입력 받으면 그에 해당하는 짝 출력 
작성일시 : 2022.02.12
작성자 : 정소영 
**/

#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
string po[100000];
string q;

class pok{
	public:
		int a;
		string p;
};

pok *po2=new pok[100000];

int compare(pok a, pok b){
	return a.p<b.p;
}

int search(int e){
	int s=0,m;
	while(s<=e){
		m=(s+e)/2;
		
		if (po2[m].p<q) s=m+1;
		else if (po2[m].p>q)e=m-1;
		else return m;
	}
	return m;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	
	for (int i=0;i<n;i++){
		cin>>po[i];
		po2[i].p=po[i];
		po2[i].a=i+1;
	}
	
	sort(po2,po2+n,compare);
	
	for (int i=0;i<m;i++){
		cin>>q;
		if (q[0]>47 && q[0]<58) cout<<po[stoi(q)-1]<<"\n";
		else cout<<po2[search(n)].a<<"\n";
	}
}

/**
26 5          (입력)
Bulbasaur
Ivysaur
Venusaur
Charmander
Charmeleon
Charizard
Squirtle
Wartortle
Blastoise
Caterpie
Metapod
Butterfree
Weedle
Kakuna
Beedrill
Pidgey
Pidgeotto
Pidgeot
Rattata
Raticate
Spearow
Fearow
Ekans
Arbok
Pikachu
Raichu
25
Raichu
3
Pidgey
Kakuna
Pikachu        (출력)
26
Venusaur
16
14
**/  
