#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m;
	for (int i = 1; i < 6; i++){
		for (int j = 1; j < 6; j++){
			int n;
			cin >> n;
			if (n == 1){
				m = abs(i - 3) + abs (j - 3);
				break;
			}
		}
	}
	cout << m << endl;

}

