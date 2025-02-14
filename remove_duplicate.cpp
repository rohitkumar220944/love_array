#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr{2,4,1,6,1,7,2,2,9,1,3,5};  
for(int i=0;i<arr.size()-1;i++)
{
    for(int j=i+1;j<arr.size();j++)
    {
        if(arr[i]>arr[j])
        {
           swap(arr[i],arr[j]);
        }
    
    }
}
for(int k=0;k<arr.size();k++)
{ cout<<arr[k];}
cout<<endl;
//remove duplicate
cout<<"array"<<endl;
 int j=0;
 for(int i=0;i<arr.size();i++)
 {
    if(arr[i]!=arr[i+1])
    {
        arr[j]=arr[i];
        j++;
    cout<<arr[i];
    }
 }
 
}
