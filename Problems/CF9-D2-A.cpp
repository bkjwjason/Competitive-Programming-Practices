#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int y,w;
	cin >> y >> w;
	int x = max(y,w);
	int n = 6 - (x - 1);
	if (n == 6){
		cout << "1/1" << endl;
	}
	else if (n == 0) {
		cout << "0/6" << endl;
	}
	else if (n % 2 == 0){
		n /= 2;
		cout << n << "/3" << endl;
	}
	else if (n % 3 == 0){
		n /= 3;
		cout << n << "/2" <<endl;
	}
	else{
		cout << n << "/6" << endl;
	}



}

