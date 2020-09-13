#include <bits/stdc++.h>
using namespace std;

void Delete( int a[], int &n, int vt)
{
    for (int i = vt; i < n-1; i++)
    {
        a[i] = a[i+i];
    }
    n--;
}


void HIHI( int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ( a[i] % 2 == 0)
        {
            Delete( a, n, i);
            i--;
        }
    }
    cout<<"Display Arr: ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter an Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>a[i];
    }
    HIHI(a, n);
    return 0;
}
