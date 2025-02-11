#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{2,5,4,2,1,3};
    int i=0;
    
    //while(i<arr.size())
   for(int i=0;i<arr.size();)
    {
    int index=arr[i]-1;
    if(arr[i]!=arr[index])
    {
        swap(arr[i],arr[index]);
    }
    else
    {
        i++;
    }
    }
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<"";
}
cout<<endl;
for(int i=0;i<arr.size();i++)
{
    if(arr[i]!=i+1)
    {
        cout<<i+1;
    }
}
}