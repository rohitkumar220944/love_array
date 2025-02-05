#include<iostream>
#include<vector>
using namespace std;
int main()
{  
     cout<<"enter the element of arr1:"<<endl;;
    
    vector<int>arr(4);
    for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
  cout<<"enter the element of arr2:"<<endl;;
    
    vector<int>brr(4);
    for(int i=0;i<brr.size();i++)
{
    cin>>brr[i];
}
vector<int>ans;
for(int i=0;i<arr.size();i++)
{
ans.push_back(arr[i]);
}
for(int i=0;i<brr.size();i++)
{
    ans.push_back(brr[i]);
}
 cout<<"union of arr1 and arr2 is :"<<endl;
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
vector<int>intersection;
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<brr.size();j++)
    {
        if(arr[i]==brr[j])
        {
            brr[j]=-1;
            intersection.push_back(arr[i]);
        }
    }
}
cout<<"intersection of arr1 and arr2 is :"<<endl;
for(auto value:intersection)
{
    cout<<value<<endl;
}
return 0;
}
