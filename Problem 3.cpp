#include <iostream>
using namespace std;

int main()
{
    int size1, f=0;
    cout<<"Enter the size of first array: ";
    cin>>size1;

    int Array[size1];
    cout<<"\nPlease enter the element of an array: \n";
    for(int i=0; i<size1; i++)
    {
        cin >> Array[i];
    }

    cout<<"\n\nThe given array is: ";
    for(int i=0; i<size1; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl << endl;
    cout<<"After removing the common elements: ";

    for (int i = 0; i < size1; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if (Array[i] == Array[j])
            {
                f = 1;
                break;
            }
        }

        if (i == j)
        {
            cout << Array[i] << " ";
        }
    }

    if(f == 0)
    {
        cout<<"\n\nThe given array was unique";
    }
    cout << endl << endl;
    return 0;
}
