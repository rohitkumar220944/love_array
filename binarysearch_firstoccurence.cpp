#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr,int start,int end,int target)
{ int ans=-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int  element=arr[mid];
         if(arr[mid]==target)
        { ans=mid;
          end=mid-1;

        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      
    }
 return ans;

}
int main()
{
    vector<int>arr{2,2,3,7,7,7,7,7,7,8,9};
    int start=0;
    int end=arr.size()-1;
    int target=7;
    int find =binarysearch(arr,start,end,target);
    if(find==-1)
    {
        cout<<"Target"<< target <<"is not found";
    }
    else{
        cout<<"Target "<< target <<" first occurrence in index :"<<find;
    }
}