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

int main() {
	int n;
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		if(n == 1)
		{
			cout << "Discarded cards:" << endl;
			cout << "Remaining card: 1" << endl;
			continue;
		}
		deque<int> deq;
		for(int i = 1; i<=n; ++i)
			deq.push_back(i);
		vector<int> ans;
		while(deq.size() > 1)
		{
			ans.push_back(deq.front());
			deq.pop_front();
			deq.push_back(deq.front());
			deq.pop_front();
		}
		cout << "Discarded cards:";
		for(int i = 0; i + 1 < ans.size();++i)
		{
			cout << " "<< ans[i] << ",";
		}
		cout << " "<<  ans[ans.size() - 1] << endl;
		cout << "Remaining card: " << deq.front() << endl;
	}
	return 0;
}
