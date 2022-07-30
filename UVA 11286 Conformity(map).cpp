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
	while(cin >> n, n)
	{
		map<set<int>, int> fr;
		for(int i = 0; i < n; ++i)
		{
			set<int> comp;
			for(int j = 0; j < 5; ++j)
			{
				int vl;
				cin >> vl;
				comp.insert(vl);
			}
			fr[comp]++;
		}
		int mx = 0, cnt = 0;
		for(auto p: fr)
		{
			mx = max(mx, p.second);
		}
		for(auto p: fr)
		{
			cnt += (p.second == mx);
		}
		cout << cnt * mx << endl;
	}
	return 0;
}
