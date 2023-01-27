// Leetcode link of the problem:
// 78: https://leetcode.com/problems/subsets/


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    for(int i=0;i<(1<<n);i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    // Enter the number of elements in the array
    cout<<"Enter the number of elements in the array:"<<endl;
    int n;cin>>n;
    // taking input of the array
    cout<<"Enter the elements of the array:"<<endl;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> ans = subsets(nums);
    cout<<"All the subsets are:"<<endl;
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}