#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, yr = 0;
	cin >> a >> b;
	while (a <= b){
		a = a * 3;
		b = b * 2;
		yr++;
	}
	cout << yr << endl;
}

