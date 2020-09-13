#include <bits/stdc++.h>
using namespace std;

void nhap( int &n)
{
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n < 1 || n > 50 );
}

void InArr( int a[], int n)
{
    cout<<"Enter an Array of "<<n<<" number:"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>a[i];
    }
}

void OutArr( int a[], int n)
{
    //cout<<"Display array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
    
}

void OutArrNguoc( int a[], int n)
{
    cout<<"Display array in reverse order: ";
    for (int i = n-1; i >= 0; i--)
    {
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}

void FindMax2( int a[], int n)
{
    int max1, max2;
    if ( a[0] > a[1] )
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }
    for (int i = 2; i < n; i++)
    {
        if ( max1 < a[i] )
        {
            max2 = max1;
            max1 = a[i];
        }
        else if ( max2 < a[i] )
        {
            max2 = a[i];
        }
    }
    if ( max2 == max1 )
    {
        cout<<"There is not max2 in array."<<endl;
    }
    else
    {
        cout<<"Second largest value in array  is: "<<max2<<endl;
    }
}

void Insert_10( int a[], int &n, int vt)
{
    
    for (int i = n; i >= vt; i--)
    {
        a[i] = a[i-1];
    }
    n++;
    a[vt] = 10;
}

void Delete( int a[], int &n, int vt)
{
    for (int i = vt; i < n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}

void caseX( int a[], int n, int x)
{
    int dem = 0;
    for (int  i = 0; i < n; i++)
    {
        if ( a[i] == x )
        {
            dem++;
        }
    }
    if ( dem == 0 )
    {
        cout<<"There is no x value in the array."<<endl;
    }
    else
    {
        cout<<"There is x value in the array."<<endl;
        cout<<x<<" has "<<dem<<" times int the array."<<endl;
        for (int i = 0; i < n; i++)
        {
            if ( x == 10)
            {
                Insert_10(a, n, i);
                i++;
            }
            // if ( a[i] == x )
            // {
            //     Insert_10( a, n, i+1);
            // }
        }
        cout<<"Display array after insert: ";
        OutArr( a, n);
        for (int i = 0; i < n; i++)
        {
            if ( a[i] == x )
            {
                Delete( a, n, i );
            }
        }
        cout<<"\nDisplay array after delete: ";
        OutArr( a, n);
    }
}

int main(int argc, char const *argv[])
{
    int n, a[55];
    nhap( n);
    InArr( a, n);
    OutArrNguoc( a, n);
    FindMax2( a, n);
    int x;
    cout<<"Enter x: ";
    cin>>x;
    caseX( a, n, x);
    return 0;
}
