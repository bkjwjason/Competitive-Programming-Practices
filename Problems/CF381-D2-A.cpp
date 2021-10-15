#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007;
const char nl = '\n';


// Solution Starts Here


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vi v;
	bool S = 1;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.pb(x);
	}
	int scnt = 0; int dcnt = 0; int j = 1;
	for (int i = 0; i < n; i++){
		if(S){
			if (v[i] > v[n-j]){
				scnt += v[i];
				dcnt += v[n-j];
				S = 0;
				j++;
			}
			else{
				scnt += v[n-j];
				dcnt += v[i];
				S = 0;
				j++;
			}

		}
		else{
			if (v[i] > v[n-j]){
				dcnt += v[i];
				scnt += v[n-j];
				S = 1;
				j++;
			}
			else{
				dcnt += v[n-j];
				scnt += v[i];
				S = 1;
				j++;
			}

		}
			}
	cout << scnt << " " << dcnt << nl;
	return 0;
}

