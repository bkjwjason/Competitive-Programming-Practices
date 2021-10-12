#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	int i = 0;
	for (int j = 0; j < s2.size(); j++){
		if (s2[j] == s1[i]){
			i += 1;
		}
	}
	cout << i + 1 << endl;
	return 0;

}

