// QUESTION
// We are given an array which contains only the numbers 0, 1 and 2. The task is to write a program to sort the array.

// APPROACH
// We will use the Dutch National Flag Algorithm to solve this problem. We will use three pointers p0, p1 and p2.
// p0, p1 will point to the 0th index in the array, p2 will point to the last index in the array.
// We will traverse the array from left to right and if we encounter a 0, we will swap it with the element at p0 and increment p0.
// If we encounter a 1, we will increment p1.
// If we encounter a 2, we will swap it with the element at p2 and decrement p2.
// We will stop the traversal when p1>p2.

#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &array){
    int p0=0, p1=0, p2=array.size()-1;
    while(p1<=p2){
        if(array[p1]==0){
            swap(array[p0], array[p1]);
            p0++;
            p1++;
        }
        else if(array[p1]==1){
            p1++;
        }
        else{
            swap(array[p1], array[p2]);
            p2--;
        }
    }
}


int main(){
    vector<int> array={1, 2, 0, 2, 1, 0, 1, 2, 0, 0, 0, 1};
    cout<<"Unsorted array: ";
    for(auto x:array){
        cout<<x<<" ";
    }
    sort012(array);
    cout<<endl<<"Sorted array: ";
    for(auto x:array){
        cout<<x<<" ";
    }
    return 0;
}