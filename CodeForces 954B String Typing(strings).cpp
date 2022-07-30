//============================================================================
// Name        : AAST.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


int main() {
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	int n;
	string s;
	cin >> n >> s;
	int mn = INT_MAX;
	//append char
	// at most one time copy string to end
	string x = "";
	for(int i = 0; i < (int)s.size()/2; ++i)
	{
		x += s[i];
		bool ok = true;
		int j = i + 1;
		for(int k = 0; k < x.size() && j < s.size(); j++, k++)
		{
			ok &= (x[k] == s[j]);
			if(!ok)
				break;
		}

		if(ok){
			int rem = n - j;
			mn = min((int)x.size()+1 + rem,mn);
		}
	}
	mn = min(mn, n);
	cout << mn << endl;
	return 0;
}
