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
	int r,c,f,s,g,k;
	vector<vector<pair<int, int>>> fac(f);
	cin >> r >> c >> f >> s >> g;
	for (int i = 0; i < f; i++){
		cin >> k;
		for (int j = 0; j < k; j++){
			int r,c;
			cin >> r >> c;
			fac[i].pb(mp(r,c));
		}
	}
	vector<tuple<int, int, int, int>> student_list;
	for (int i = 0; i < s; i++){
		int r,c,n,f;
		cin >> r >> c >> n >> f;
		tuple <int, int, int, int> current;
		current = make_tuple(r,c,n,f);
		student_list.pb(current);
	}
	vector<int> T;
	for (int i = 0; i < f; i++){
		int t;
		cin >> t;
		T.pb(t);
	}
	vector<int> currentT(f, 0);
	int totalmin = 0;
	for (auto currenttuple : student_list){
		int cf = get<3>(currenttuple);
		int cr = get<0>(currenttuple);
		int cc = get<1>(currenttuple);
		int currentmin = r+c;
		for (auto currentrc : fac[cf]){
			if (currentrc.first == r && currentrc.second == c){
				currentT[cf] += 1;
				break;
			}
			else if(currentT[cf] == T[cf]){
				break;
			}
			else{
				int diff = abs(cr-currentrc.first) + abs(cc - currentrc.second);
				if (diff < currentmin){
					currentmin = diff;
				}
			}
		}
		totalmin += currentmin;
	}
	cout << totalmin << nl;	
	return 0;
}

