#include<iostream>
using namespace std;

int main()
{
    int i=5,j=6,cl=0,k=0,l=1;
    int array_1[i]={1,4,6,3,6,9};
    int array_2[j]={5,3,7,1,2,6};
    int common[cl];

    for(int a=0; a<i;a++)
    {
        for(int b=0; b<j;b++)
        {
            if(array_1[a]==array_2[b])
            {
                cl++;
            }
            else if(a!=b && array_1[a]==array_1[b])
            {
                cl++;
            }
            else if(a!=b && array_2[a]==array_2[b])
            {
                cl++;
            }
        }
    }
    if(cl>0)
    {
        for(int a=0; a<i;a++)
    {
        for(int b=0; b<j;b++)
        {
            if( array_1[a]==array_2[b])
            {

                    common[k]=array_2[b];
                    k++;

            }
            else if(a!=b && array_1[a]==array_1[b])
            {

                    common[k]=array_1[b];
                    k++;

            }
            else if(a!=b && array_2[a]==array_2[b])
            {
                for(int m=0;m<cl;m++)
                {
                    if(common[m]==array_2[b])
                        l++;
                    else l=0;
                }

                if(l==1)
                {
                    common[k]=array_2[b];
                    k++;
                }
            }
        }
    }
    for(int m=0; m<cl;m++)
    {
        cout<<common[m];
    }

    }

    else if(cl==0)
    {
        cout<<"No common element found";
    }




    return 0;
}

