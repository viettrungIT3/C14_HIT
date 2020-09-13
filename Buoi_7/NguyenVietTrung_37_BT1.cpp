#include <bits/stdc++.h>
using namespace std;

void nhap( float &x, int &n)
{
    cout<<"Enter x: ";
    cin>>x;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 0 );
}

double tinh( float x, int n)
{
    float s;
    if ( n >= 2 && x != 0 )
    {
        s = 0;
        float tu = 1;
        int mau = 1;
        for (int i = 1; i <= n; i++)
        {
            mau += (i+1);
            tu *= sqrt(abs(x));
            s += (float)tu/mau;
        }
        
    }
    else
    {
        s = n*n*x*x;
    }
    return s;
}



int main(int argc, char const *argv[])
{
    float x;
    int n;
    nhap( x, n);
    cout<<"Gia tri bieu thuc S = "<<tinh( x, n);
    return 0;
}
