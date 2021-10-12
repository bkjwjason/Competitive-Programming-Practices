#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,cnt =0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
	}
	cout << cnt <<endl;
	return 0;

}

