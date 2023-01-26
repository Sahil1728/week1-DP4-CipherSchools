// QUESTION
// Given a sorted array return the indexes of first and last occurence of given value

// Approach-> We will be using binary search for finding the indexes and Time Complexity for the same will be O(logN)

#include<bits/stdc++.h>
using namespace std;

// Checking for the first Occurence of the value
int firstOccurence(vector<int>& arr, int key){
    // -1 means value not found
    int ans = -1;
    int l=0;
    int r=arr.size()-1;
    int mid=l+(r-l)/2;
    while(l<=r){
        // we have got the index of the key, now we will check if it is also present in the left half
        if(arr[mid]==key){
            ans=mid;
            r=mid-1;
        }
        // if value at mid is greater we will check left side
        else if(arr[mid]>key){
            r=mid-1;
        }
        // otherwise we will check right side of mid
        else{
            l=mid+1;
        }
        // updating mid value
        mid = l+(r-l)/2;
    }
    return ans;
}

// Checking for the last Occurence of the value
int lastOccurence(vector<int>& arr, int key){
    // -1 means value not found
    int ans = -1;
    int l=0;
    int r=arr.size()-1;
    int mid=l+(r-l)/2;
    while(l<=r){
        // we have got the index of the key, now we will check if it is also present in the right half
        if(arr[mid]==key){
            ans=mid;
            l=mid+1;
        }
        // if value at mid is greater we will check left side
        else if(arr[mid]>key){
            r=mid-1;
        }
        // otherwise we will check right side of mid
        else{
            l=mid+1;
        }
        // updating mid value
        mid = l+(r-l)/2;
    }
    return ans;
}




int main(){
    // given the sorted array
    vector<int> sortedArr{1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 6, 7, 7, 8, 8, 8, 8, 9, 9};
    // Taking input of key to be searched for
    cout<<"Enter the value to be searched for: ";
    int key;cin>>key;
    cout<<endl;
    int firstOcc = firstOccurence(sortedArr, key);
    int lastOcc = lastOccurence(sortedArr, key);
    // printing the first and last occurence of the value
    if(firstOcc==-1){
        cout<<key<<" not found in the array"<<endl;
    }
    else{
        cout<<"First index of "<<key<<" is: "<<firstOcc<<endl;
        cout<<"Last index of "<<key<<" is: "<<lastOcc<<endl;
    }
    return 0;
}