#include<iostream>
#include<limits.h>
using namespace std;
/*void printrowsum(int arr[][3],int row,int col)
{cout<<" the sum of row :"<<endl;
     for(int i=0;i<row;i++)
    {  int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }  
        
        cout<<sum<<" "<<endl;
    }
    cout<<" the sum of col :"<<endl;
     for(int i=0;i<row;i++)
    {  int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[j][i];
        }  
        
        cout<<sum<<" "<<endl;;
}

int searchelement( int arr[][3],int row,int col,int key)
{  
    
     cout<<"enter the key element:"<<endl;
     cin>> key;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            if(key==arr[i][j])
            { 
                cout<<"elment is present";
                return 1;
            }
            else if(arr[i][j]!=key){
                cout<<"element is not present";
                return -1;
            }
            break;
        }
        break;
     }

}*/
 int findmax(int arr[][3],int row,int col)
 {
    int max= INT_MIN;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
       
 }
  return max;
 }
int main()
{ int key;
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2D array:"<<endl;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
//printrowsum(arr,row,col);
//searchelement(arr,row,col,key);
cout<<"max :"<<findmax(arr,row,col);
     return 0;
}