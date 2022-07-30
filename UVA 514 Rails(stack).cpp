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
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	int n;
	while (cin >> n, n) {
		while (true) {
			bool zero = false;
			stack<int> station;
			queue<int> A;

			for (int i = 1; i <= n; ++i)
				A.push(i);

			for (int i = 1; i <= n; ++i) {
				int currCoach;
				cin >> currCoach;
				if (currCoach == 0) {
					zero = true;
					break;
				}
				while (A.size() && A.front() < currCoach) {
					station.push(A.front());
					A.pop();
				}
				if (A.size() && A.front() == currCoach) {
					A.pop();
				}
				if (station.size() && station.top() == currCoach) {
					station.pop();
				}
			}
			if(zero)
			{
				break;
			}
			if (station.empty()) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}

		}
		cout << endl;
	}
	return 0;
}
