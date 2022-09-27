#include<iostream>
using namespace std;

int main()
{
    int A[10]={8,4,6,1,6,9,6,1,9,8};
    int r=0;

    int i;

    cout<<"Input a number to search: ";
    cin>>i;

    for(int j=0; j<10;j++)
    {
        if(A[j]==i)
        {
            r++;
        }
    }

    cout<<"The number occurs "<<r<<" times in the array\n\n";


    return 0;
}


