/*
In Olympics, the countries are ranked by the total number of medals won. You are given six integers G1, S1, B1, and G2, S2, B2, the number of gold, silver and bronze medals won by two different counties respectively. Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	 while(t--) {
	     int sum1=0, sum2=0;
	     for(int i=0; i<3; i++) {
	         int temp;
	         cin>>temp;
	         sum1+=temp;
	     }
	     
	     for(int i=0; i<3; i++) {
	         int temp;
	         cin>>temp;
	         sum2+=temp;
	     }
	     
	     if(sum1>sum2) {
	         cout<<1<<"\n";
	     }
	     else cout<<2<<"\n";
	 }
	return 0;
}