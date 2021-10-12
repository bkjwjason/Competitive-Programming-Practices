#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int len = s.length();
	int Smoves = 0;
	int strt = 0;
	for (int i = 0 ; i < len; i++){
		int index = s[i] - 97;
		int walk = abs (strt - index);
		if (walk<13){
			Smoves += walk;
		}
		else{
			Smoves += 26 - walk;
		}
		strt = index;
	}
	cout << Smoves << endl;

	return 0;

}

