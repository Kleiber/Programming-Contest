/**
*  Generated by tpp tool
*  File: EVENDIFF.cpp
*  Created: 30-01-2021 13:02:07
**/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;


int main() {
    // do not remove this code if you use cin or cout
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--) {
        int N;
        cin>>N;

        int even = 0;
        int odd =0;

        for(int i = 0; i < N; i++) {
            int a;
            cin>>a;

            if(a % 2 ==0) even++;
            else odd++;
        }

        cout<<min(even, odd)<<endl;
    }

    return 0;
}
