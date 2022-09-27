#include<iostream>
using namespace std;

int main()
{
    int A[10]={8,4,6,1,6,9,6,1,9,8};
    int r,j=0;

    for(j; j<10;j++)
    {
        r=0;
        for(int k=0;k<10;k++)
        {

            if(A[j]==A[k])
            {
                r++;


                }

        }
        cout<<A[j]<<" occurs = "<<r<< " times\n";
    }



    return 0;
}


