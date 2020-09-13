#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n < 2 );
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<i; j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    for (int i=n; i>=0; i--)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int  j=0; j<i; j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}
