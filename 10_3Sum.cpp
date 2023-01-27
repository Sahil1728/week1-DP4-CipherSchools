// Leetcode link of the problem
// https://leetcode.com/problems/3sum/


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    if(nums.size()<=2){return {{-1}};}
    vector<vector<int>> sol;
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size()-2;i++){
        int curr=nums[i];
        int st=i+1,end=nums.size()-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(curr+nums[st]+nums[end]==0){
                sol.push_back({curr,nums[st],nums[end]});
                st++;
                end--;
            while(st<end && nums[st-1]==nums[st]){
                st++;
            }
            while(st<end && nums[end]==nums[end+1]){
                end--;
            }
            }
            else if(curr+nums[st]+nums[end]<0){
                st++;
            }
            else{
                end--;
            }
        }
        while(i<nums.size()-1 and nums[i]==nums[i+1]){
            i++;
        }
    }
    return sol;
    
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
    vector<vector<int>> sol=threeSum(nums);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}