/*
You are given a sequence A1,A2,…,AN. An ordered pair of indices (i,j) in this sequence is called a beautiful pair if i≠j and (Ai−Aj)/Ai<(Ai−Aj)/Aj. (Here, division represents real division, e.g. 52 is equal to 2.50.)

Help Chef find the number of beautiful pairs present in the given sequence.

Note: Since the input is large, prefer using fast input methods.
*/

#include<bits/stdc++.h>
using namespace std;

void fun(vector<long long> vect, long long n) {
    int count=0;
    
    int i=0;
    sort(vect.begin(), vect.end());
    for(int i=0; i<n;) {
        int r=i;
        do {
            i++;
        }
        while(vect[i]==vect[i-1] && i<n);
        count=count+(n-i)*(i-r);
    }
    cout<<2*count<<"\n";
    return;
}

int main() {
	int t;
	cin>>t;
	
	while(t>0) {
	    long long n;
	    cin>>n;
	    vector<long long> vect(n);
	    
	    for(int i=0; i<n; i++) {
	       cin>>vect[i]; 
	    }
	    fun(vect, n);
	    t--;
	}
	return 0;
}

//There is some problem in this code so I'll find the problem and add the optimised code soon.