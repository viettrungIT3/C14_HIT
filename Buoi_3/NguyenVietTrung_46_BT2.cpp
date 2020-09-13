#include <bits/stdc++.h>
using namespace std;

void nhap( int &n)
{
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 5 );
}

void InArr(int a[], int n)
{
    cout<<"Nhap vao mang "<<n<<" so nguyen: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>a[i];
    }
}

void OutArr( int a[], int n)
{
    //cout<<"Hiem thi mang: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}

int Sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}

int Max(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if ( m < a[i])
        {
            m = a[i];
        }
    }
    return m;
}

int Min(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if ( m > a[i])
        {
            m = a[i];
        }
    }
    return m;
}

float tinh_F( int a[], int n)
{
    if ( Min( a, n)*Max( a, n) != 0 )
    {
       return (float)Sum( a, n)*Min( a, n)/Max( a, n);
    }
    else
    {
        return 1.0*Sum( a, n);
    }  
}

void Convert( int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ( i % 2 == 1 )
        {
            a[i] *= -1;
        }
        else
        {
            a[i] *= 2;
        }
        
    }
    
}

void swap( int &m, int &n)
{
    int temp = m;
    m = n;
    n = temp;
}

void sapxepgiam( int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
            if ( a[i] < a[j] )
            {
                swap( a[i], a[j]);
            }
            
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    nhap( n);
    int a[ n+5];
    InArr( a, n);
    cout<<"Ket qua: F = "<<tinh_F(a, n)<<endl;
    Convert( a, n);
    cout<<"Mang sau khi thay doi gia tri: ";
    OutArr( a, n);
    sapxepgiam( a, n);
    cout<<"\nMang sau khi sap xep giam la: ";
    OutArr( a, n);
    return 0;
}
