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
	string s;
	cin >> s;
	int ab = 0; int ba = 0;
	for (int i = 0; i < sz(s) - 1; i++){
		if (s[i] == 'a' && s[i+1] == 'b'){
			ab++;
		}
		else if (s[i] == 'b' && s[i+1] == 'a'){
			ba++;
		}
	}
	if (ab == ba){
		cout << s << nl;
		return;
	}
	for(int i = 0; i < sz(s); i++){
		ab = 0;
		ba = 0;
		if (s[i] == 'a'){
			s[i] = 'b';
			for(int j = 0; j < sz(s) -1; j++){
				if (s[j] == 'a' && s[j+1] == 'b'){
					ab++;
				}
				else if (s[j] == 'b' && s[j+1] == 'a'){
					ba++;
				}
			}
			if (ab == ba){
				break;
			}
			else{
				s[i] = 'a';
			}
		}
		else if (s[i] == 'b'){
			s[i] = 'a';
			for(int j = 0; j < sz(s) -1; j++){
				if (s[j] == 'a' && s[j+1] == 'b'){
					ab++;
				}
				else if (s[j] == 'b' && s[j+1] == 'a'){
					ba++;
				}
			}
			if (ab == ba){
				break;
			}
			else{
				s[i] = 'b';
			}



		}
	}
	cout << s << nl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while(T--) {
		solve();
	}

	return 0;
}

