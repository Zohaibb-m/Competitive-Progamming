	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int no;
		cin >> no;
		int wires[no];
		for(int i=0;i<no;i++)
			cin >> wires[i];
		int shots;
		cin >> shots;
		for(int i=0;i<shots;i++){
			int x,y;
			cin >> x >> y;
			x--;
			if(x!=0)wires[x-1]+=((wires[x]-(wires[x]-y))-1);
			if(x!=no-1)wires[x+1]+=(wires[x]-y);
			wires[x]=0;
		}
		for(int i=0;i<no;i++)
			cout << wires[i] << "\n";
	}