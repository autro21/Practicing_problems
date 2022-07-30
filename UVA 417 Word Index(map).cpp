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
	map<string, int> seq;
	int idx = 1;
	//size 1
	for (char a = 'a'; a <= 'z'; a++) {
		string tmp = "";
		tmp += a;
		//cerr << tmp << endl;
		seq[tmp] = idx++;
	}
	//size 2
	for (char a = 'a'; a <= 'z'; a++) {
		for (char b = a + 1; b <= 'z'; b++) {
			string tmp = "";
			tmp += a;
			tmp += b;
			//cerr << tmp << endl;
			seq[tmp] = idx++;
		}
	}
	//size 3
	for (char a = 'a'; a <= 'z'; a++) {
		for (char b = a + 1; b <= 'z'; b++) {
			for (char c = b + 1; c <= 'z'; c++) {
				string tmp = "";
				tmp += a;
				tmp += b;
				tmp += c;
				//0cerr << tmp << endl;
				seq[tmp] = idx++;
			}
		}
	}
	//size 4
	for (char a = 'a'; a <= 'z'; a++) {
		for (char b = a + 1; b <= 'z'; b++) {
			for (char c = b + 1; c <= 'z'; c++) {
				for (char d = c + 1; d <= 'z'; d++) {
					string tmp = "";
					tmp += a;
					tmp += b;
					tmp += c;
					tmp += d;
					//cerr << tmp << endl;
					seq[tmp] = idx++;
				}
			}
		}
	}
	//size 5
	for (char a = 'a'; a <= 'z'; a++) {
		for (char b = a + 1; b <= 'z'; b++) {
			for (char c = b + 1; c <= 'z'; c++) {
				for (char d = c + 1; d <= 'z'; d++) {
					for (char e = d + 1; e <= 'z'; e++) {
						string tmp = "";
						tmp += a;
						tmp += b;
						tmp += c;
						tmp += d;
						tmp += e;
						//cerr << tmp << endl;
						seq[tmp] = idx++;
					}
				}
			}
		}
	}
	string x;
	while(cin >> x)
	{
		cout << seq[x] << endl;
	}
	return 0;
}
