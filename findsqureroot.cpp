#include<iostream>
#include<vector>
using namespace std;
int findsqr(int n)
{
    int s=0;
    int e=n;
    int target=n;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(mid*mid==target)
        {
            return mid;
        }
        if(mid*mid>target)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }

    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter number :"<<endl;
    cin>>n;
    int element=findsqr(n);
   // cout<<element;
    double ans=element;
    int decimal=3;
    double step=0.1;
    for(int i=0;i<3;i++)
    {
        for(double j=ans;j*j<=n;j=j+step)
        {
            ans=j;
        }
        step=step/10;
    }
    cout<<ans;
}
