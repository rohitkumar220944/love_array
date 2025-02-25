#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(s==e)
        {
            return s;
        }
        if(m%2==0)
        {
            if(arr[m]==arr[m+1])
            {
                s=m+2;
            }
            else{
                e=m;
            }
        }
        else{
            if(arr[m]==arr[m-1])
            {
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans =solve(arr);
    cout<<"index:"<<ans<<"  value :"<<arr[ans];

}