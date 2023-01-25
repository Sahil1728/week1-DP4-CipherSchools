// Question based on leetcode problem
// https://leetcode.com/problems/merge-sorted-array/
#include<bits/stdc++.h>
using namespace std;

int main(){
    // m->len of array 1
    // n->len of array 2
    int m,n;
    cout<<"Enter the length of the first and the second array respectively ";
    cin>>m>>n;
    vector<int>a;
    vector<int>b;
    cout<<endl<<"Enter the first sorted array ";
    for(int i=0;i<m;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    cout<<endl<<"Enter the second sorted array ";
    for(int i=0;i<m;i++){
        int x;cin>>x;
        a.push_back(x);
    }

    return 0;
}