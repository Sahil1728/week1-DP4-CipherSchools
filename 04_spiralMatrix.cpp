// Leetcode link of problem
// https://leetcode.com/problems/spiral-matrix/

// Approach
// create variable sRow, sCol, eRow, eCol variables and iterate, update them accordingly to get the desired result


#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix){
    vector<int> order;
    int sRow=0, eRow=matrix.size()-1;
    int sCol=0, eCol=matrix[0].size()-1;
    while(sRow<=eRow && sCol<=eCol){
        for(int i=sCol;i<=eCol;i++){
            order.push_back(matrix[sRow][i]);
        }
        sRow++;
        for(int i=sRow;i<=eRow;i++){
            order.push_back(matrix[i][eCol]);
        }
        eCol--;
        if(sCol>eCol||sRow>eRow)break;
        for(int i=eCol;i>=sCol;i--){
            order.push_back(matrix[eRow][i]);
        }
        eRow--;
        for(int i=eRow;i>=sRow;i--){
            order.push_back(matrix[i][sCol]);
        }
        sCol++;
    }
    return order;
}

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
    // spiral order to a vector
    vector<int> order=spiralOrder(matrix);
    // printing the vector
    cout<<endl<<"Matrix elements printed in spiral order: "<<endl;
    for(auto x:order){
        cout<<x<<" ";
    }
    return 0;
}