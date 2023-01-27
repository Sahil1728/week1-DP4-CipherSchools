// Leetcode link of problem
// https://leetcode.com/problems/trapping-rain-water/

// We have to return trh number of units of water which will get stored between the blocks

#include<bits/stdc++.h>
using namespace std;


int rainWater(vector<int> &ht){
    int n = ht.size();
    vector<int> lMax(n), rMax(n);
    // Calculating lMax
    lMax[0]=ht[0];
    for(int i=1;i<n;i++){
        lMax[i]=max(lMax[i-1],ht[i]);
    }
    // Calculating rMax
    rMax[n-1]=ht[n-1];
    for(int i=n-2;i>=0;i--){
        rMax[i]=max(lMax[i+1],ht[i]);
    }
}


int main(){
    cout<<"Enter the total number of blocks: ";
    int n;cin>>n;
    cout<<endl<<"Enter the heights of blocks [0,infinty): ";
    vector<int> heights;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        heights.push_back(x);
    }
}