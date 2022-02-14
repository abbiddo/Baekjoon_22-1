/**
프로그램명 : 11723.cpp
설명 : 집합 
작성일시 : 2022.02.14
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
int set[21]={0}; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	string a;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>>a;
		if (a=="add"){
			cin>>k;
			set[k]=1;
		}
		
		else if (a=="remove"){
			cin>>k;
			set[k]=0;
		}
		
		else if (a=="check"){
			cin>>k;
			cout<<set[k]<<"\n";
		}
		
		else if (a=="toggle"){
			cin>>k;
			set[k]=!(set[k]);
		}
		
		else if (a=="all")
			for (int j=1;j<21;j++) set[j]=1;
			
		else if (a=="empty")
			for (int j=1;j<21;j++) set[j]=0;
	}
}

/**
26
add 1
add 2
check 1
check 2
check 3
remove 2
check 1
check 2
toggle 3
check 1
check 2
check 3
check 4
all
check 10
check 20
toggle 10
remove 20
check 10
check 20
empty
check 1
toggle 1
check 1
toggle 1
check 1
-----
1
1
0
1
0
1
0
1
0
1
1
0
0
0
1
0

**/  
