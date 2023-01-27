// Leetcode link of the problem
// https://leetcode.com/problems/search-in-rotated-sorted-array/

// Approach
// find the pivot element
// if the target is greater than the pivot element, search in the right half
// if the target is less than the pivot element, search in the left half
// if the target is equal to the pivot element, return the pivot element


#include<bits/stdc++.h>
using namespace std;

// Finding the pivot element in the array
int findPivot(vector<int> &nums){
    int start=0,end=nums.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid<end && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(mid>start && nums[mid]<nums[mid-1]){
            return mid-1;
        }
        if(nums[mid]<=nums[start]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}


// Binary search function
int binarySearch(vector<int> &nums,int start,int end,int target){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

// Search function
int search(vector<int> &nums, int target){
    int pivot=findPivot(nums);
    if(pivot==-1){
        return binarySearch(nums,0,nums.size()-1,target);
    }
    if(nums[pivot]==target){
        return pivot;
    }
    if(nums[0]<=target){
        return binarySearch(nums,0,pivot-1,target);
    }
    return binarySearch(nums,pivot+1,nums.size()-1,target);
}


int main(){
    cout<<"Enter size of array: ";
    int n;cin>>n;
    vector<int> nums;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        int x;cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter the target: ";
    int target;cin>>target;
    cout<<"Target found at index: "<<search(nums,target)<<endl;
    return 0;
}