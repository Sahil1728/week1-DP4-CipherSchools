// Leetcode link of problem
// https://leetcode.com/problems/rotate-image/

// APPROACH-> take transpose of the matrix and the rotate the columns n/2 times

#include<bits/stdc++.h>
using namespace std;

// taking transpose of matrix
void transpose(vector<vector<int>>& mat){
    int sz = mat.size();
    for(int i=0;i<sz;i++){
        for(int j=0;j<i;j++){
            int temp = mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
}



int main(){
    // Since we have to rotate a n*n matrix we will take n as input
    cout<<"Enter the size of the square matrix ";
    int n;cin>>n;
    // the matrix
    vector<vector<int>> matrix;
    // taking the matrix as input
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
    // taking transpose of matrix
    transpose(matrix);
    // printing the matrix
    for(auto x:matrix){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }




}