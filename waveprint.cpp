#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>arr{{1,2,3,4},{3,4,5,6},{8,7,6,9}};
    for(int i=0;i<arr.size();i++)

    {for(int j=0;j<arr[0].size();j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
    }
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<col;i++)
    {
        if((i&1)==0)
        {
            for(int c=0;c<col;c++)
            {
                cout<<arr[c][i];
            }
        }
            
             else 
             {
                for(int c=row-1;c>=0;c--)
                {
                    cout<<arr[c][i];
                }
             }
    }
}