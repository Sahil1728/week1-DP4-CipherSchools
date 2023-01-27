// Problem:
// Provided a string, return all possible permutations of the string.


#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r, vector<string> &sol){
    if(l==r){
        sol.push_back(s);
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r,sol);
            swap(s[l],s[i]);
        }
    }
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    vector<string> sol;
    permute(s,0,s.size()-1,sol);
    for(int i=0;i<sol.size();i++){
        cout<<sol[i]<<endl;
    }
    return 0;
}