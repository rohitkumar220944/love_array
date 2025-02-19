#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1{0,0,5,4,1,7};
    vector<int>arr2{1,3,2,5};
    vector<int>ans;
    int carry=0;
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    while(i>=0 && j>=0)
    {
        int x=arr1[i]+arr2[j]+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        i--;
        j--;
    }
     while(i>=0)
    {
        int x=arr1[i]+0+carry;
        int digit=x%10;
        ans.push_back(digit);
    carry=x/10;
        i--;
    }
    
    while(j>=0)
    {
        int x=arr1[j]+0+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        j--;
    }
    if(carry)
    {
        ans.push_back(carry);
    }
    while(ans[ans.size()-1]==0)
    {
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
    cout<<ans[i];
    }
    
    
}
//hello
