#include <bits/stdc++.h>
using namespace std;

int dem(int n)
{
    if( n == 0 )
    {
        return 0;
    }
    return dem(n/10) +1;
}

double Fx(int n)
{
    if ( n == 0 )
    {
        return 1;
    }
    return 2*n*Fx(n-1);
}

void NhiPhan(int n)
{
    long a[100], na = 0;
    while ( n > 0)
    {
        a[na] = n%2;
        na++;
        n /= 2;
    }
    //cout<<"He nhi phan: ";
    for (int i = na -1; i >= 0; i--)
    {
        cout<<" "<<a[i];
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 0 );
    cout<<"a. Dem: "<<dem(n)<<endl;
    //cout<<"b. Khong co bieu thuc f."<<endl;
    cout<<"b. Bieu thuc F("<<n<<") = "<<Fx(n)<<endl;
    cout<<"c. He nhi phan: ";
    NhiPhan(n);
    return 0;
}
