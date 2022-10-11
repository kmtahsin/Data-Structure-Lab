#include<iostream>
#include<string.h>
using namespace std;

void info()
    {
        int n=3,m;
        cout<<"How many students: ";
        cin>>m;
        string s[m][n];
        for(int i=0; i<m;i++)
        {
            cout<<"Input students info (ID, Credit Complete, CGPA): \n";
            for(int j=0; j<n;j++)
            {
                cin>>s[i][j];
            }
        }
        cout<<"ID       Credit Complete     CGPA\n";
        for(int i=0; i<m;i++)
        {
            //cout<<"Students info : \n";
            for(int j=0; j<n;j++)
            {
                if(s[i][1]>="50" && s[i][2]>="3.75")
                cout<<s[i][j]<<"            ";
            }
            cout<<endl;
        }
    }


int main()
{
    info();

    return 0;
}

