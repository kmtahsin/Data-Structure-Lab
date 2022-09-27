#include<iostream>
using namespace std;

int main()
{
    int n1=6,n2=6,i,j,cl=0;
    int array_1[n1];
    int array_2[n2];
    int m[n1+n2];
    cout<<"Input the size of the first array: ";
    cin>>n1;
    cout<<"Enter the first array elements: \n";
    for(int a=0; a<n1;a++)
    {
        cin>>array_1[a];
    }
    cout<<"Input the size of the second array array: ";
    cin>>n2;
    cout<<"Enter the second array elements: \n";
    for(int a=0; a<n2;a++)
    {
        cin>>array_2[a];
    }



    for(int a=0; a<n1;a++)
    {
        for(int b=0; b<n2;b++)
        {
            if(array_1[a]==array_2[b])
            {
               // cout<<array_1[a]<<"\n";
                cl++;
            }
            else if(a!=b && array_1[a]==array_1[b])
            {
                //cout<<array_1[a]<<"\n";
                cl++;
            }
            else if(a!=b && array_2[a]==array_2[b])
            {
                //cout<<array_2[a]<<"\n";
                cl++;
            }
        }
    }



    if(cl>0)
    {
        cout<<"\n\nCommon elements of the arrays: ";
         for(i=0;i<n1;i++)

        {

            for(j=0;j<n2;j++)

            {

                if(array_1[i]==array_2[j])

                {

                    cout<<array_1[i]<<" ";

                }

            }

        }

    }

    else if(cl==0)
    {
        cout<<"\n\nNo common element found";
    }


    cout<<"\n\n";

    return 0;
}

