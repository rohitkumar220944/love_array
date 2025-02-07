#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=5;
    vector<int>ans;
     int carry=0;
     ans.push_back(1);
     for(int i=2;i<=num;i++)
     {
        for(int j=0;j<ans.size();j++)
        {
            int x=ans[j]*i+carry;
            ans[j]=x%10;
            carry=x/10;
        }
        if(carry)
        {
            ans.push_back(carry);
        }
       carry=0;
        
     }
     reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }     
}