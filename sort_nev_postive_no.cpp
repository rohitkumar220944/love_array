#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,9,-22,2,-2,4,-3};
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        if(arr[low]<0)
        {
            
            low++;
        }
        else if(arr[low]>0)
        {
            swap(arr[high],arr[low]);
            high--;
            

        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

}
