#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>arr,int N,int K,int sol)
{
    int sum=0;
    int count=0;
    for(int i=0;i<=N;i++)
    {
        if(arr[i]>sol)
        {
            return false;
        }
        if(arr[i]+sum>sol)
        {
            count++;
            sum=arr[i];
            if(count>K)
            {
                false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}
int allocation(vector<int>arr,int N,int K)
{
    if(K>N)
    return -1;
    int ans=-1;
    int start=0;
    int end=accumulate(arr.begin(),arr.end(),0);
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(ispossible(arr,N,K,mid))
        {
           ans=mid;
           end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr{10,20,30,40};
    int N=4;
    int K=2;
    int sol=allocation(arr,N,K);
    cout<<sol;
}