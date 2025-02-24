#include<iostream>
#include<vector>
using namespace std;
int findpivot(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(s==e)
        return s;
        
        
        if( m+1<=e && arr[m]>arr[m+1])
        return m;
        
        if(m-1>=0 && arr[m-1]>arr[m])
        return m-1;

        if(arr[s]>arr[m])
        {
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;
}
int binarysearch(vector<int>arr,int s,int e,int target)
{
while(s<=e)
{
    int m=s+(e-s)/2;
    if(arr[m]==target)
    {
        return m;
    }
    else if(arr[m]>target)
    {
        e=m-1;
    }
    else{
        s=m+1;
    }
}
return -1;
}

int search(vector<int>arr,int target,int pivot)
{
 int anssearch=0;
 if(target>arr[0]&&arr[pivot]>target)
 {
anssearch=binarysearch(arr,0,pivot,target);

 }
 else{
    anssearch=binarysearch(arr,pivot+1,arr.size()-1, target);
 }
 return anssearch;
}
int main()
{
    vector<int>arr{8,9,1,2,3,4,5};
    int pivot=findpivot(arr);
    cout<<"index :"<<pivot<<"  value :"<<arr[pivot]<<endl;
    
    int target =8;
    search(arr,target,pivot);
   int a= binarysearch(arr,0,arr.size()-1,target);
    cout<<"Target found in index :"<<a;



}