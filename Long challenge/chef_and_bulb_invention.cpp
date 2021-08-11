/*
Chef is trying to invent the light bulb that can run at room temperature without electricity. So he has N gases numbered from 0 to N−1 that he can use and he doesn't know which one of the N gases will work but we do know it.

Now Chef has worked on multiple search algorithms to optimize search. For this project, he uses a modulo-based search algorithm that he invented himself. So first he chooses an integer K and selects all indices i in increasing order such that imodK=0 and test the gases on such indices, then all indices i in increasing order such that imodK=1, and test the gases on such indices, and so on.

Given N, the index of the gas p that will work, and K, find after how much time will he be able to give Chefland a new invention assuming that testing 1 gas takes 1 day.
*/

/*
Logic: We only need to count the number of elements that come before reching p and for that we 
can add all the elements which have modulo less than p%k and add the remaining elements.
*/

//Complexity for one case = O(1);

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {

	    ll n, p, k, count=0, remain;
	    cin>>n>>p>>k;
	   
	    count=n/k;
	    remain=n%k;
	    int sum;
	    
	    if(remain>=p%k) {
	        sum=p%k;
	    }
	    else {
	        sum=remain;
	    }
	        
	   count= count*(p%k) + sum;
	   count+=p/k + 1;
	    cout<<count<<"\n";
	    
	}
	return 0;
}