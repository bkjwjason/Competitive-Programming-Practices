#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int a, b;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b;
	for(int i = 1; i <= 10; ++i){
		int x = a * i;
		if ((x % 10 == 0) || (x % 10 == b)){
			cout << i << endl;
			return 0;	
		}
	}
	return 0;

}

