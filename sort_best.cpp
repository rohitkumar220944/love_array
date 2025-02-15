#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{2,2,1,3,9,3,-9,3,-1};
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size()-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"find dublicate"<<endl;
    for(int j=0;j<arr.size()-1;j++)
    {
        if(arr[j]==arr[j+1])
        {
           cout<<arr[j]<<" ";
            
        }
        //skip all duplicate
        while(j<arr.size() && arr[j]==arr[j+1])
        {
            j++;
        }
   
    }


}
