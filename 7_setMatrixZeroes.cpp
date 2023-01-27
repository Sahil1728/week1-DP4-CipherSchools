// leetcode link of the problem
// https://leetcode.com/problems/set-matrix-zeroes/

// Approach
// create a vector of pairs to store the indices of the zeroes in the matrix
// iterate over the vector and set the corresponding row and column to zero

#include<bits/stdc++.h>
using namespace std;


void setZeroes(vector<vector<int>> &matrix){
    vector<pair<int,int>> zeroes;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                zeroes.push_back({i,j});
            }
        }
    }
    for(auto x:zeroes){
        for(int i=0;i<matrix[0].size();i++){
            matrix[x.first][i]=0;
        }
        for(int i=0;i<matrix.size();i++){
            matrix[i][x.second]=0;
        }
    }
}


int main(){
    cout<<"Enter size of n*m matrix: ";
    int n,m;cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i=0;i<n;i++){
        cout<<"Enter row "<<i+1<<endl;
        vector<int> row;
        for(int j=0;j<m;j++){
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
    // setting zeroes
    setZeroes(matrix);
    // printing the matrix
    cout<<endl<<"Matrix after setting zeroes:"<<endl;
    for(auto x:matrix){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}

