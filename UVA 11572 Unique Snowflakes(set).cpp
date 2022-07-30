//============================================================================
// Name        : AAST.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>
#include <stdlib.h>
typedef long long ll;
using namespace std;

const int N = 2e5 + 5;

int main() {
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	int tc, n;
	cin >> tc;
	int lst, ans, cnt;

	while(tc--)
	{
		//number of snowflakes
		cin >> n;
		map<int, int> id;
		lst = ans =  cnt = 0;
		for(int i = 1; i <= n;++i){
			//snowflakes
			int sf;
			cin >> sf;
			if(id.count(sf))
			{
				lst = max(lst, id[sf]);

				cnt = i - lst - 1;
				//cerr << "i = " << i << "\t" << sf << " " << lst << " " << id[sf] << " " << cnt << endl;
			}
			id[sf] = i;
			cnt++;
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
}
