#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, cnt =0;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= 2){
			cnt++;
		}
	}
	cout << cnt << endl;
}

