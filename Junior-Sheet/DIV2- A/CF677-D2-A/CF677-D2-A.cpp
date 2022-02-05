#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,h,count=0;
	cin >> n >> h;
	for(int i=0;i<n;i++){
		int no;
		cin >> no;
		no>h?count+=2:count+=1;
	}
	cout << count;
}