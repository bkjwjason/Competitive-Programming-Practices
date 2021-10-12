#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, h, total = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		if (x > h){
			total += 2;

		}
		else {
			total += 1;
		}
	}
	cout << total << endl;
}

