// Question based on leetcode problem
// https://leetcode.com/problems/merge-sorted-array/
#include<bits/stdc++.h>
using namespace std;

// merging the two arrays using merge function
vector<int> mergeArrays(vector<int> &a, int m, vector<int> &b, int n){
    // Size of a, b and merged array
    vector<int> nArr(m+n, 0);
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    // while both iterators are >=0 i.e neither of them is fully traversed
    while(i>=0 && j>=0){
        // if a[i]>b[j] => a[k]=a[i]
        if(a[i]>b[j]){
            nArr[k]=a[i];
            i--;
        }
        else{
            nArr[k]=b[j];
            j--;
        }
        k--;
    }
    // if the second array isn't fully traversed
    while(j>=0){
        nArr[k]=b[j];
        j--;
        k--;
    }
    // if the first array isn't fully traversed
    while(i>=0){
        nArr[k]=a[i];
        i--;
        k--;
    }
    return nArr;
}



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
    for(int i=0;i<n;i++){
        int x;cin>>x;
        b.push_back(x);
    }
    // calling the mergeArrays function and passing both the arrays to create new sorted array
    vector<int> newArr = mergeArrays(a, m, b, n);
    
    // printing the elements of new array to check whether the code worked or not
    for(auto x:newArr){
        cout<<x<<" ";
    }

    return 0;
}