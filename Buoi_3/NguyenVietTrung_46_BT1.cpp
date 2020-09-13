#include <bits/stdc++.h>
using namespace std;

void nhap(int &n)
{
    cout<<"Enter n: ";
    do
    {
        cin>>n;
        if ( n <= 0 || n >= 1000 )
        {
            cout<<"Sorry. You have entered wrong. Please enter it again.";
        }
        
    } while ( n <= 0 || n>= 1000);
    
}

void ex( int &a, int &b)
{
    a += b;
    b = b-a;
    cout<<a<<endl;
    cout<<b;
}

int main(int argc, char const *argv[])
{
    int n;
    nhap( n);
    int a, b;
    cout<<"Enter a: "; cin>>a;
    cout<<"Enter b: "; cin>>b;
    ex( a, b);
    return 0;
}
