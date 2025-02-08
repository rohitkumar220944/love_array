#include <iostream>
#include <vector>
using namespace std;

int findnumber(vector<int>arr)
{
   int ans=0;
   for(int i=0;i<arr.size();i++)
   {
    ans=ans^arr[i];
   }
   return ans;

}
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
     cin>>n;
    vector<int>arr(n);
   
    cout<<"enter the element"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];

    }
    int uniquenumber= findnumber(arr);
    cout<<"the unique number is "<< uniquenumber <<endl; 

}