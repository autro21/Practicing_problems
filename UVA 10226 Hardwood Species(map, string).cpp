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
	int t;
	scanf("%d\n", &t);
	string tmp;
	while(t--)
	{
		map<string, int> fr;
		string tree;
		int total = 0;
		while(getline(cin, tree))
		{
			if(tree == "")
			{
				break;
			}
			fr[tree]++;
			total++;
		}
		for(auto p: fr)
		{
			cout <<fixed << setprecision(4)<< p.first << " " << ((1.0 * p.second / total) * 100.0) << endl;
		}
		if(t!=0)cout << endl;
	}
	return 0;
}
