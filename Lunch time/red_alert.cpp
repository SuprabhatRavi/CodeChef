/*
Finally a monsoon has come. According to the Meteorological Department, there will be rain in the upcoming N days in the city. Initially, the water level of the city is zero millimetres. The amount of rain on the i-th day can be described by an integer Ai as follows:

If Ai>0, the water level of the city increases by Ai millimetres on the i-th day.
If Ai=0, there is no rain on the i-th day. The water level of the city decreases by D millimetres on such a day. However, if the water level is less than D millimetres before the i-th day, then it becomes zero instead.
There will be a red alert in the city if the water level becomes strictly greater than H millimetres on at least one of the N days. Determine if there will be a red alert.
*/

#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> vect, int n, int d, int h) {
    int res=0;
    for(int i=0; i<n; i++) {
        if(vect[i]>0) {
            res+=vect[i];
        }
        else {
            if(res>d)
                res-=d;
            else 
            res=0;
        }
        
        if(res>h) {
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
    return;
}

int main() {
	int t;
	cin>>t;
	
	while(t>0) {
	    int N, D, H;
	    cin>>N>>D>>H;
	    vector<int> vect(N);
	    
	    for(int i=0; i<N; i++) {
	        cin>>vect[i];
	    }
	    fun(vect,N,D,H);
	    t--;
	}
	return 0;
}