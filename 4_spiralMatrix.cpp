// Leetcode link of problem
// https://leetcode.com/problems/spiral-matrix/

// Approach
// create variable sRow, sCol, eRow, eCol variables and iterate, update them accordingly to get the desired result


#include<bits/stdc++.h>
using namespace std;


int main(){
    cout<<"Enter size of n*n matrix: ";
    int n;cin>>n;
    vector<vector<int>> matrix;
    for(int i=0;i<n;i++){
        cout<<"Enter row "<<i+1<<endl;
        vector<int> row;
        for(int j=0;j<n;j++){
            cout<<"Enter element "<<j+1<<": ";
            int x;cin>>x;
            row.push_back(x);
        }
        matrix.push_back(row);
        cout<<endl;
    }
    // printing the matrix
    cout<<"Original matrix:"<<endl;
    for(auto x:matrix){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}