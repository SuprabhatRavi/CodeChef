/*
You have prepared four problems. The difficulty levels of the problems are A1,A2,A3,A4 respectively. A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level. A problem can belong to at most one problem set. Output the maximum number of problem sets you can create using the four problems.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    
    while(t--) {
        unordered_map<int, int> m;
        
        for(int i=0; i<4; i++) {
            int temp;
            cin>>temp;
            m[temp]++;
        }
        
        int n=m.size();
        
        switch(n) {
            case 1: cout<<0<<"\n"; break;
            case 2: if(m[m.begin()->first] ==2) cout<<2<<"\n";
                    else cout<<1<<"\n"; 
                    break;
            default: cout<<2<<"\n";
        }
    }
	return 0;
}