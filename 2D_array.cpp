#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the Number of row and column";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ;j<c ;j++)
        {
            cout<<"Enter the elements of array";
            cin>>arr[i][j];
        }
    }
    cout<<"Elements of array are:\n";
        for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ;j<c ;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}