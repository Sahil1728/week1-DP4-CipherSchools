// Leetcode link of the problem
// https://leetcode.com/problems/generate-parentheses/

#include<bits/stdc++.h>
using namespace std;


string generateParenthesisHelper(vector<string> &sol, string s, int open, int close){
    if(open==0 && close==0){
        sol.push_back(s);
        return s;
    }
    if(open>0){
        generateParenthesisHelper(sol,s+"(",open-1,close);
    }
    if(close>open){
        generateParenthesisHelper(sol,s+")",open,close-1);
    }
    return s;
}

vector<string> generateParenthesis(int n) {
    vector<string> sol;
    if(n==0){return sol;}
    string s="";
    int open=n,close=n;
    generateParenthesisHelper(sol,s,open,close);
    return sol;
}

int main(){
    cout<<"Enter n: ";
    int n;cin>>n;
    vector<string> sol=generateParenthesis(n);
    for(int i=0;i<sol.size();i++){
        cout<<sol[i]<<endl;
    }
    return 0;
}