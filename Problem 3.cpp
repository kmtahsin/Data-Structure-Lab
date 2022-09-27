#include<iostream>

using namespace std;

int main()
{
    int A[10]={8,4,6,1,6,9,6,1,9,8};

    for(int i=1;i<10;i++)
    {
        if(A[i-1]==A[i])
        {
            for(int j=0;j<10;j++)
            {
                A[j]=A[j+1];
            }
        }
    }
    cout<<"Output: ";
    for(int i=0; i<10;i++)
    {
        cout<<A[i]<<"  ";
    }

return 0;
}
