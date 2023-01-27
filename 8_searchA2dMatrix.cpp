// leetcode link of the problem
// https://leetcode.com/problems/search-a-2d-matrix-ii/

// Approach
// start from the top right corner of the matrix
// if the element is greater than the target, move down
// if the element is less than the target, move left
// if the element is equal to the target, return true

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target){
    int i=0,j=matrix[0].size()-1;
    while(i<matrix.size() && j>=0){
        if(matrix[i][j]==target){
            return true;
        }
        else if(matrix[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
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
    // searching for the target
    cout<<"Enter the target: ";
    int target;cin>>target;
    if(searchMatrix(matrix,target)){
        cout<<"Target found!"<<endl;
    }
    else{
        cout<<"Target not found!"<<endl;
    }
    return 0;
}
