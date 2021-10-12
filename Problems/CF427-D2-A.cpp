#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,sum = 0,cnt = 0;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	for(int i = 0; i < n; i++){
		if(v[i] < 0){
			sum += v[i];
			if (sum < 0){
				cnt++;
			}
		}
		else if(v[i] > 0 && sum < 0){
			sum = 0 + v[i];
		}
		else if (v[i] > 0 && sum >= 0){
			sum += v[i];
		}
	}

	cout << cnt << endl;
	return 0;

}

