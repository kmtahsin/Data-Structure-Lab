#include<iostream>
using namespace std;

int main()
{
    int i=5,j=8,b=0,c=0;
    int array_1[i]={10,20,30,40,50};
    int array_2[j]={1,2,3,4,5,6,7,8};
    int t=i+j;
    int marge_array[t];
    for(int a=0;a<t;a++)
    {
        if(a<i)
        {
            marge_array[a]=array_1[b];
            b++;
        }
        else if(a==i || a>i && a<t)
        {
            marge_array[a]=array_2[c];
            c++;
        }
    }
    

    cout<<"Marged array in reverse order: ";

    for(int x=t-1;x>=0;x--)
    {
        cout<<marge_array[x]<<"  ";
    }

    return 0;

}
