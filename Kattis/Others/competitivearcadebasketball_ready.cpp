/**
*  Generated by tpp tool
*  File: competitivearcadebasketball.cpp
*  Created: 07-10-2020 22:37:02
**/

#include <bits/stdc++.h>
using namespace std;


int main() {
    // do not remove this code if you use cin or cout
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, p, m;
    cin>>n>>p>>m;

    unordered_map<string, int> M;
    unordered_map<string, bool> visited;

    for(int i = 0; i < n; i++) {
    	string name;
    	cin>>name;
    	M[name] = 0;
    	visited[name] = 0;
    }

    int cont = 0;
    for(int i = 0; i < m; i++) {
    	string name;
    	int points;
    	cin>>name>>points;
    	
    	M[name] += points;
    	if(M[name] >= p && !visited[name]) {
    		cout<<name<<" wins!"<<endl;
    		visited[name] = 1;
    		cont++;
    	}
    }

    if(cont == 0) cout<<"No winner!"<<endl;

    return 0;
}