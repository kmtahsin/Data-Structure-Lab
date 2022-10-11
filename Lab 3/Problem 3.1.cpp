#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<"Enter the row size :";
    cin>>i;
    cout<<"Enter the column size :";
    cin>>j;
    int mat[i][j];
    int rev[j][i];
    int a=i,b=j;
    cout<<"Enter the matrix: ";
    for(int n=0;n<i;n++)
    {
        for(int m=0;m<j;m++)
        {
            cin>>mat[n][m];
        }
    }

    cout<<"The matrix: \n";
    for(int n=0;n<j;n++)
    {
        for(int m=0;m<i;m++)
        {
            cout<<mat[m][n]<<" ";
        }
        cout<<endl;
    }
}
