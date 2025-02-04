#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
    vector<int>arr{2,6,4,6,1};
 vector<int>brr{6,2,9,0};
 
 vector<int>intersection;
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<brr.size();j++)
    {
        if(arr[i]==brr[j])
        {
            //brr[j]=-1;
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
