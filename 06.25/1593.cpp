/**
프로그램명 : 1593.cpp
설명 : 문자 해독
작성일시 : 2022.06.25
작성자 : 정소영
**/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[150] = { 0 };
int arr2[150];
string s;
int main() {
	int n, a, cnt = 0;
	char k;
	cin >> n >> a;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr[k]++;
	}
	cin >> s;
	
	for (int i = 0; i < s.length() - n; i++) {
		copy(arr, arr+150, arr2);
		if (!arr2[s[i]]) continue;
		int c = n, j = i;
		while (c) {
			if (!arr2[s[j]]) break;
			arr2[s[j]]--;
			c--;
			j++;
		}
		if (!c) cnt++;
	}

	cout << cnt;
}

/**
실행 결과
4 11
cAda
AbrAcadAbRa
-----
2
**/
