#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		long long a, b, c;
		cin >> a >> b >> c;
		if (a > b && a > c){
			cout << 0 << " " << a-b+1 << " " << a-c+1 << endl;
		}
		else if (b > a && b > c){
			cout << b-a+1 << " " << 0 << " " << b-c+1 << endl;
		}
		else if (c > a && c > b){
			cout << c-a+1 << " " << c-b+1 << " " << 0 << endl;
		}
		else{
			cout << 1 << " " << 1 << " " << 1 << endl;
		}
	}

}

