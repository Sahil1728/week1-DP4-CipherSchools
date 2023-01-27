// Leetcode link of problem
// https://leetcode.com/problems/trapping-rain-water/

// We have to return the number of units of water which will get stored between the blocks

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
        rMax[i]=max(rMax[i+1],ht[i]);
    }
    // Water stored
    int water=0;
    for(int i=1;i<n;i++){
        water+=min(lMax[i],rMax[i])-ht[i];
    }
    return water;
}


int main(){
    cout<<"Enter the total number of blocks: "<<endl;
    int n;cin>>n;
    cout<<endl<<"Enter the heights of blocks [0,infinty): ";
    vector<int> heights;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        heights.push_back(x);
    }
    cout<<rainWater(heights)<<" is the amount of water stored between the blocks"<<endl;
    return 0;
}