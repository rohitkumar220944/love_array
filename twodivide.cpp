#include<iostream>
#include<vector>
using namespace std;
int find(int dividend ,int divisor)
{int ans=0;
    int s=0;
    int e=abs(dividend);
    while(s<= e)
    {
        int mid=s+(e-s)/2;
        if(abs(mid*divisor)==(dividend))
        {
            return mid;
           
        }
        else if(abs(mid*divisor)>abs(dividend))
        {
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    
    }
    if((dividend<0 && divisor<0)||(dividend>0 && divisor>0))
    {
        return ans;
    }
    else{
        return -ans;

    }
}
int main()
{
    int dividend=40;
    int divisor=-4;
    int give=find(dividend,divisor);
    cout<<give;
}
   