// Leetcode link of problem
// https://leetcode.com/problems/trapping-rain-water/

// We have to return trh number of units of water which will get stored between the blocks

#include<bits/stdc++.h>
using namespace std;



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