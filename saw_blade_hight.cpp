#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossiblesolution(vector<int>arr,int tree,int mid)
{
    int woodcollection=0;
    int wood=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>mid)
        {
            woodcollection+=arr[i]-mid;
            
        }
    }
    return woodcollection>=tree;
}
int findheight(vector<int>arr,int tree)
{   int ans=-1;
    int start=0;
    int end=*max_element(arr.begin(),arr.end());
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(ispossiblesolution(arr,tree, mid))
        {
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return ans;
}
int main()
{
    int tree=7;//kamse km 7meter k tree chahiye
    vector<int>arr{20,15,10,17};
    int sol=findheight(arr,tree);
    cout<<sol;


}