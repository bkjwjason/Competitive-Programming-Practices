#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
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

void solve() {



}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vi v;
	for (int i = 0; i < n; i++){
		int j;
		cin >> j;
		v.pb(j);
	}
	int a = count(v.begin(),v.end(),1);
	int b = count(v.begin(),v.end(),2);
	int c = count(v.begin(),v.end(),3);

	int arr[] = {a,b,c};
	sort(arr, arr+3);
	cout << arr[0];
	return 0;
}

