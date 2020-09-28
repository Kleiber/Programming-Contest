#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class StarsInTheSky {
public:
	int countPictures(int N, vector <int> X, vector <int> Y) {
		vector<pair<int,int> > V; 
		for(int i = 0; i < N; i++) V.push_back(make_pair(X[i], Y[i]));

		map<vector<pair<int,int> >, bool> M;		
		
		for(int i = 0 ; i < ( 1 << N ) ; i++) {
			vector<pair<int,int> > aux;
			int xmax = 0;
			int xmin = 1000000005;
			int ymax = 0;
			int ymin = 1000000005;
			
	        for (int j = 0; j < N ; ++ j ){
            	if ( ( i & ( 1 << j ) ) != 0 ) {
            		xmax = max(V[j].first, xmax);
            		xmin = min(V[j].first, xmin);
            		ymax = max(V[j].second, ymax);
            		ymin = min(V[j].second, ymin);
            	}
            }
            
            for (int j = 0; j < N ; ++ j ){
        		if(V[j].first >= xmin && V[j].first <= xmax && V[j].second >= ymin && V[j].second <= ymax) {
		    		aux.push_back(make_pair(V[j].first, V[j].second));
        		}
            }
            
            sort(aux.begin(), aux.end());
            M[aux] = true;
    	}
		
		vector<pair<vector<pair<int,int> >, bool> > V2 (M.begin(), M.end());
		int ans = V2.size() - 1;
		return ans;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, vector <int> p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}";
	cout << "]" << endl;
	StarsInTheSky *obj;
	int answer;
	obj = new StarsInTheSky();
	clock_t startTime = clock();
	answer = obj->countPictures(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p3;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	int p0;
	vector <int> p1;
	vector <int> p2;
	int p3;
	
	{
	// ----- test 0 -----
	p0 = 4;
	int t1[] = {1,2,3,4};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,1,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 10;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 4;
	int t1[] = {100,200,200,100};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {100,100,200,200};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 9;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 3;
	int t1[] = {10000,11000,12000};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {52000,50000,51000};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 7;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 7;
	int t1[] = {0,6,2,3,4,0,6};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0,0,4,5,6,10,10};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 45;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 15;
	int t1[] = {3,141592653,589793238,462643383,279502884,197169399,375105820,974944592,307816406,286208998,628034825,342117067,982148086,513282306,647093844};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,414213562,373095048,801688724,209698078,569671875,376948073,176679737,990732478,462107038,850387534,327641572,735013846,230912297,24924836};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 613;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
