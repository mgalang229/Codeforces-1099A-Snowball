#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int w, h, u1, d1, u2, d2;
	cin >> w >> h >> u1 >> d1 >> u2 >> d2;
	/* 
	 * run a loop until the height(h) is zero
	 * add the current height(h) to the current weight(w) of the snowball
	 * if the current height matches either the one of the position of the stones(d1 or d2),
	 * subtract the corresponding value of that stone(u1 or u2) to the current weight(w)
	 * decrement height
	 * 
	 * */
	while(h>0) {
		w+=h;
		if(h==d1)
			w=max(0, w-u1);
		else if(h==d2)
			w=max(0, w-u2);
		h--;
	}
	cout << w << "\n";
}
