	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int n,no,s,d,count=0,trash=0;
		cin >> no >> s >> d;
		for(int i=0;i<no;i++){
			cin >> n;
			if(n<=s)trash+=n;
			if(trash>d){
				count++;
				trash=0;
			}
		}
		cout << count;
	}