#include <bits/stdc++.h> 
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<char> s;
	string n;
	cin >> n;
	for (int i = 0; i < n.size(); i++){
		s.insert(n[i]);
	}
	if (s.size() % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}
	else{
		cout << "IGNORE HIM!" << endl;
	}
}

