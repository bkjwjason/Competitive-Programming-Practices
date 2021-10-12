#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		if (s.length() > 10){
			cout << s[0] << s.length() - 2 << s.back() << endl;
		}
		else {
			cout << s << endl;
		}
	}
	return 0;

 
 
 
}
