#include<iostream>
#include<string.h>
using namespace std;

void encode()
    {
        string s;
        int j;
        char c;
        cout<<"Enter the string : ";
        getline(cin, s);
        //cout<<s;
        cout<<"How many character do you want to skip : ";
        cin>>j;
        //cout<<j;
        int size=s.length();
        //cout<<"\n"<<size;
        for(int i=0; i<size;i++)
        {
            i=i+j;
            c=s[i];

            if (c>='a' && c<='z')
            {
                c=c+2;
                if(c>'z')
                {
                    c=c-'z'+'a'-1;
                }
                s[i]=c;
            }
            else if (c>='A' && c<='Z')
            {
                c=c+2;
                if(c>'Z')
                {
                    c=c-'Z'+'A'-1;
                }
                s[i]=c;
            }
        }
        cout<<s;
    }


int main()
{
    encode();

    return 0;
}
