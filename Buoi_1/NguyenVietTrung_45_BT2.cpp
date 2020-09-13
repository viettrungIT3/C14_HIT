#include <bits/stdc++.h>
using namespace std;

double Tinh(int n, float x)
{
    double f = 0;
    if ( n % 2 == 0)
    {
        f = 2019*x + sqrt((float)(pow( n, 4) + 5));
    }
    else
    {
        f = x;
        for (int i = 0; i <= n; i++)
        {
            f += 1.0/pow( 2, i);
        }
        
    }
    return f;
}

int main(int argc, char const *argv[])
{
    int n;
    float x;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 0);
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Gia tri bieu thuc: F("<<x<<","<<n<<") = "<<Tinh(n, x);
    return 0;
}
