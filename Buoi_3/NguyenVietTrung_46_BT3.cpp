#include <bits/stdc++.h>
using namespace std;

void nhap( int &n, int &m)
{
    do
    {
        cout<<"Enter Row: ";
        cin>>n;
        cout<<"Enter Column: ";
        cin>>m;
    } while ( n <= 2 || m >= 6);
}

void InMatrix( char letter, int a[][100], int n, int m)
{
    cout<<"Enter Matrix "<<letter<<": "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"\t"<<letter<<"["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}

void OutMatrix( int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    
}

void SumMtrix( int A[][100],int B[][100],int C[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = A[i][j]+B[i][j];

        }
    }
}

void DifferenceMtrix( int A[][100],int B[][100],int D[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            D[i][j] = A[i][j]-B[i][j];

        }
    }
}

void MaxSumColumn( int C[][100], int n, int m)
{
    int a[100], na = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += C[i][j];
        }
        a[na] = sum;
        na++;
    }
    int max = a[0], vt = 0;
    for (int i = 0; i < na; i++)
    {
        if ( max < a[i] )
        {
            max = a[i];
            //vt = i +1 ;
        }
    }
    cout<<"Vi tri hang co tong lon nhat trong matrix C la hang: ";
    for (int i = 0; i < na; i++)
    {
        if ( a[i] == max )
        {
            cout<<i+1;
        }
        
    }
}

void MinMultiColumn( int D[][100], int n, int m)
{
    int a[100], na = 0;
    for (int j = 0; j < m; j++)
    {
        int temp = 1;
        for (int i = 0; i < n; i++)
        {
            temp = temp * D[i][j];
        }
        a[na] = temp;
        na++;
    }
    int min = a[0];
    int vt = 0;
    for (int i = 0; i <= na; i++)
    {
        if ( min > a[i] )
        {
            min = a[i];
            //vt = i+1;
        }
    }
    cout<<"\tVi tri cot co tich nho nhat trong matrix D la: ";
    for (int i = 0; i <= na; i++)
    {
        if ( a[i] == min )
        {
            cout<<i+1;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int n, m, A[100][100], B[100][100], C[100][100], D[100][100];
    nhap( n, m);
    InMatrix( 'A', A, n, m);
    InMatrix( 'B', B, n, m);
    SumMtrix( A, B, C, n, m);
    cout<<"Matrix C: "<<endl;
    OutMatrix( C, n, m);
    DifferenceMtrix( A, B, D, n, m);
    cout<<"Matrix D: "<<endl;
    OutMatrix( D, n, m);
    MaxSumColumn( C, n, m);
    MinMultiColumn( D, n, m);
    return 0;
}
