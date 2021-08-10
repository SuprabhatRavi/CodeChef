/*
Chef has three spells. Their powers are A, B, and C respectively. Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P.

Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells.
*/

#include <bits/stdc++.h>
using namespace std;

void fun(vector<long long> vect) {
    if(vect[0]>vect[1]) {
        if(vect[2]>vect[1]) {
            cout<<vect[0] + vect[2]<<"\n";
            return;
        }
        else {
            cout<<vect[0]+vect[1]<<"\n";
            return;
        }
    }
    else {
        if(vect[2]>vect[0]) {
            cout<<vect[1] + vect[2]<<"\n";
            return;
        }
        else {
            cout<<vect[1] + vect[0]<<"\n";
            return;
        }
    }
}

int main() {
	int t;
	cin>>t;
	
	while(t>0) {
	    vector<long long> vect(3);
	    for(int i=0; i<3; i++) {
	        cin>>vect[i];
	    }
	    fun(vect);
	    t--;
	}
	return 0;
}
