#include <iostream>
using namespace std;
void transpose(int arr[][4],int row,int col,int transposearr[4][3])
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            transposearr[j][i]=arr[i][j];
        }
    }
}
void printarr(int arr[][3],int row,int col)
{cout<<"transpose :"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4]={{1,2,3,4},{3,4,5,6},{8,7,6,9}};
    int row =3;
    int col=4;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int transposearr[4][3];
    transpose(arr,row,col,transposearr);
    printarr(transposearr,row,col);
}
