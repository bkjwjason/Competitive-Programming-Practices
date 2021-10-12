#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, Acnt = 0, Dcnt= 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++){
		if (s[i] == 'A'){
			Acnt++;
		}
		else{
			Dcnt++;
		}
	}
	if (Acnt > Dcnt){
		cout << "Anton" << endl;
	}
	else if (Acnt == Dcnt){
		cout << "Friendship" << endl;
	}
	else{
		cout << "Danik" << endl;
	}


}

