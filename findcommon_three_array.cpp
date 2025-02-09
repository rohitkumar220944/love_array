#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr1{3,4,7,9,10,25};
    vector<int>arr2{2,5,8,9,13,14,};
    vector<int>arr3{6,7,9,14,18,25};
    for(int i=0;i<arr1.size();)
    {
        for(int j=0;j<arr2.size();)
        {
            for(int k=0;k<arr3.size();)
            {
                if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
                {  cout<<arr1[i];
                   i++;
                   j++;
                   k++;
                }
                else if(arr1[i]<arr2[j])
                {
                    i++;
                }
                else if(arr2[j]<arr3[k])
                {
                    j++;
                }
                else{
                    k++;
                }
            }
        }
    }
}