#include <bits/stdc++.h>
using namespace std;

void Nhap( int &n, float &x)
{
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter x: ";
    cin>>x;
}

long GiaiThua( int n)
{
    if ( n == 1 ) 
    {
        return 1;
    }
    return GiaiThua(n-1)*n;
}

long LuyThua(float x, int n)
{
    if ( n == 1 )
    {
        return x;
    }
    return LuyThua( x, n-1)*x;
}

double tinh( float x, int n)
{
    if(n == 1)         
    {
        return (x+2);         
    }         
    return tinh(x,n-1) + ((LuyThua(x,n-1)*x + 2*n) / (GiaiThua(n-1)*n)); 
}



int main(int argc, char const *argv[])
{
    int n;
    float x;
    Nhap( n, x);
    cout<<"Ket qua: "<<tinh(x, n)+1;
    return 0;
}
