#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    do
    {
        cout<<"Enter the number of years: ";
        cin>>n;
    } while (n <= 0);
    do
    {
        cout<<"Enter the number of months: ";
        cin>>m;
    } while ( m <= 0 || m >= 13 );
    if ( m == 2 )
    {
        if ( n % 4 == 0 && n % 100 != 0 || n % 400 == 0 )
        {
            cout<<" => 29 days.";
        }
        else
        {
            cout<<" => 28 days.";
        }
        
    }
    else if ( m == 4 || m == 6 || m == 9 || m == 11 )
    {
        cout<<" => 30 days.";
    }
    else
    {
        cout<<" => 31 days.";
    }
    
    return 0;
}


