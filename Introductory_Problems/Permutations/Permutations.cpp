/*
 * Problem Name: Permutations
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-05-28
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	
	if (n==2 || n==3){
	    cout<<"NO SOLUTION";
	    return 0;
	}
	if (n==4){
	    cout<<"3 1 4 2";
	    return 0;
	}
	for(int i=n;i>=1;i-=2){
	    cout<<i<<" ";
	}
	for(int i=n-1;i>=1;i-=2){
	    cout<<i<<" ";
	}
}