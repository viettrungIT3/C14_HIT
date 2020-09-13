#include <bits/stdc++.h>
using namespace std;

void Nhap( int &m, int &n)
{
    do
    {
        cout<<"Enter m: ";
        cin>>m;
        cout<<"Enter n: ";
        cin>>n;
    } while ( m <= 0 || n <= 0 || m > 3 || n > 14 );
}

void Array_A( int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (i+1)*(j+1);
        }
    }
} 

void Display_A( int a[][100], int m, int n)
{
    cout<<"Display Matrix: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    
}

void SumColumn( int a[][100], int m, int n)
{
    cout<<"Sum Column: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[j][i];
        }
        cout<<"\tSum Column"<<i+1<<" : "<<sum<<endl;
    }
}

void MinRow( int a[][100], int m, int n)
{
    cout<<"Min Row: "<<endl;
    for (int i = 0; i < m; i++)
    {
        int min = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if ( min > a[i][j])
            {
                min = a[i][j];
            }
        }
        cout<<"Min Row"<<i+1<<" : "<<min<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int m, n, a[100][100];
    Nhap( m, n);
    Array_A( a, m, n);
    Display_A( a, m, n);
    SumColumn( a, m, n);
    MinRow( a, m, n);
    return 0;
}
