/**
*  Generated by tpp tool
*  File: CVDRUN.cpp
*  Created: 02-10-2020 18:52:26
**/

#include <bits/stdc++.h>
using namespace std;


int main() {
    // do not remove this code if you use cin or cout
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;

    for(int cases = 0; cases < T; cases++) {
    	int N, K, X, Y;
    	cin>>N>>K>>X>>Y;

    	vector<bool> visited(N, 0);
    	bool ans = 0;
    	while(!visited[X]) {
    		visited[X] = 1;
    		if(X == Y) {
    			ans = 1;
    			break;
    		} else X = (X + K) % N;
    	}

    	if(ans) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }

    return 0;
}
