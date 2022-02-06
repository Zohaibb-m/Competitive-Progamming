#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a=0,d=0;
	string input;
	cin >> n;
	cin >> input;
	for(int i=0;i<n;i++)
		input[i]=='D'?d++:a++;
	d>a?cout << "Danik":d<a?cout << "Anton":cout << "Friendship";
}