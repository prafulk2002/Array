/*
Challenge - 2D matrix Search problem

Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000
*/

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
    int x;
    cout<<"enter the element for search:\n";
    cin>>x;
    bool flag=false;
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ;j<c ;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"index is:"<<i<<j;
                cout<<"\n Number is:"<<x;
                flag=true;
            }
            
        }
    }
     if (flag)
    {
        cout<<"\nfound";
    }
    else
    cout<<"Not Found";
    return 0;
}