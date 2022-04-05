/*
Challenge- Matrix Multiplication problem

Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.

Constraints
1 <= n1,n2,n3 <= 1,000

Approach
1. Make a nested loop of order 3. In the outer loop iterate over rows of
the first matrix and in the inner loop iterate over columns of the
second matrix.
2. Multiply rows of the first matrix with columns of the second matrix in
the innermost loop and update in the answer matrix.
*/

#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the Number of row and column for matrix1\n";
    cin>>r1>>c1;
    cout<<"Enter the Number of row and column for matrix2\n";
    cin>>r2>>c2;

    while(c1!=r2)
    {
        cout<<"Matrix multiplication not possible enter row and column again\n";
        cout<<"Enter the Number of row and column for matrix1\n";
        cin>>r1>>c1;
        cout<<"Enter the Number of row and column for matrix2\n";
        cin>>r2>>c2;
    }

    int arr1[r1][c1];
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ;j<c1 ;j++)
        {
            cout<<"Enter the elements of first array";
            cin>>arr1[i][j];
        }
    }

    int arr2[r2][c2];
    for(int i=0 ; i<r2 ; i++)
    {
        for(int j=0 ;j<c2 ;j++)
        {
            cout<<"Enter the elements of second array";
            cin>>arr2[i][j];
        }
    }

    int ans[r1][c2];
    for(int i=0; i<r1; i++) 
    {
        for(int j=0; j<c2; j++)
        {
            ans[i][j] = 0;
        }
    }
        
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ;j<c2 ;j++)
        {
            for(int k=0 ; k<r2 ; k++)
            {
                ans[i][j] +=arr1[i][k]*arr2[k][j];
            }
        }
    }

    cout<<"Matrix multiplication is:\n";
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ;j<c2 ;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}