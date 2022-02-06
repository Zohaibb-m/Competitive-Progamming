	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int length,distinct;
		cin >> length >> distinct;
		string aa;
		vector<char> arr;
		int i=0;
		for(char a='a';i<distinct;i++,a++){
			if(a=='z'+1)a='a';
			arr.push_back(a);
		}
		// for(autov:arr)
		// 	cout << v; 
		int j=0;
		for(int i=0;i<length;i++){
			cout << arr[j++];
			if(j==arr.size())j=0;
		}
	}