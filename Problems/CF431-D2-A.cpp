#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[4];

	int sum = 0;
	for (int i = 0; i < 4; i++){
		cin >> a[i];
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		sum += a[s[i] - '1'];
	}
	cout << sum << endl;
	
	return 0;

	
	
		 

}

