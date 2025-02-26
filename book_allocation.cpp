#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
bool ispossiblesoultion(vector<int>arr,int N,int M,int sol)
{
    int pagesum=0;
    int count=1;
    for(int i=0;i<N;i++)
    {
        if(arr[i]>sol){
        return false;
        }
        if(pagesum +arr[i]>sol)
        {
            count++;
            pagesum=arr[i];
            if(count>M)
            {
                return false;
            }
        }
        else{
            pagesum+=arr[i];
        }
    }
    return true;
}
int findpages(vector<int>arr,int N,int M)
{
  if(M>N)
  return -1;
  int start=0;
  int end=accumulate(arr.begin(),arr.end(),0);
  int ans=-1;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(ispossiblesoultion(arr,N,M,mid))
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
    vector<int>arr{12,34,67,90};
    int N=4;
    int M=2;
    int sol= findpages(arr,N,M);
    cout<<sol;
}