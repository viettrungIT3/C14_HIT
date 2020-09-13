#include <bits/stdc++.h>
using namespace std;

long long GT( long long n)
{
    if ( n == 1 )
    {
        return 1;
    }
    return GT(n-1)*n;
}

int dem( long long n)
{
    int d;
    while ( GT(n) % 10 == 0)
    {
        d++;
        n /= 10;
        if ( GT(n) % 10 != 0)
        {
            break;
        }
        
    }
    return d;
}

int main(int argc, char const *argv[])
{
    long long n;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 2 || n >= pow(10,12) );
    cout<<"Ket qua: "<<dem(n);
    return 0;
}
