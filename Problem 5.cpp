#include <iostream>
using namespace std;

int main()
{
    int size1, count1, i, j;
    cout<<"Enter the size of array: ";
    cin>>size1;

    int Array[size1], f[size1];

    cout<<"\nPlease enter the element of an array: \n";
    for(i=0; i<size1; i++)
    {
        cin >> Array[i];
        f[i] = 0;
    }

    for(i=0; i<size1; i++)
    {
        count1 = 1;
        for(j=i+1; j<size1; j++)
        {
            if(Array[i] == Array[j])
            {
                count1++;
                f[j] = -1;
            }
        }

        if(f[i] == 0)
        {
            f[i] = count1;
        }
    }

    for(i=0; i<size1; i++)
    {
        if(f[i] != -1)
        {
            cout<< Array[i] <<" occurs = " << f[i] << " times."<<endl;
        }
    }
    return 0;
}
