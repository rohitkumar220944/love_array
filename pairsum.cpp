#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr{3,4,2,4,3,7,6,7,2};
int sum =8;

for(int i=0;i<arr.size();i++)
{
    int element=arr[i];
    for(int j=i+1;j<arr.size();j++){
        int elementa =arr[j];
    
    for(int k=j+1;k<arr.size();k++)
    
        if(element+elementa+arr[k]==sum)
        {
            cout<<"elment is: "<<element<<"+"<<elementa<<"+"<<arr[k]<<"="<<sum<<endl;
        }
    }
}
}