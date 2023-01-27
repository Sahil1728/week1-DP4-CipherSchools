// Leetcode link of the problem
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/


#include<bits/stdc++.h>
using namespace std;

vector<string> letterCombinations(string digits) {
    if(digits.size()==0){return {};}
    vector<string> sol;
    vector<string> phone={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    sol.push_back("");
    for(int i=0;i<digits.size();i++){
        int curr=digits[i]-'0';
        vector<string> temp;
        for(int j=0;j<phone[curr].size();j++){
            for(int k=0;k<sol.size();k++){
                temp.push_back(sol[k]+phone[curr][j]);
            }
        }
        sol=temp;
    }
    return sol;
}


int main(){
    cout<<"Enter digits: ";
    string digits;cin>>digits;
    vector<string> sol=letterCombinations(digits);
    for(int i=0;i<sol.size();i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}