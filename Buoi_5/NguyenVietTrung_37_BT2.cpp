#include <bits/stdc++.h>
using namespace std;

void InArr( int *a, int n)
{
    cout<<"Enter an Array of "<<n<<" number: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(a+i);
    }
}

void OutArr( int *a, int n)
{
    //cout<<"Display Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"  "<<*(a+i);
    }
    cout<<endl;
}

bool ktSNT( int n)
{
    if ( n < 2 )
    {
        return false;
    }
    for (int i = 2; i < sqrt((float)n); i++)
    {
        if ( n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool ktSCP( int n)
{
    int a = sqrt((float)n);
    if ( a*a == n )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Delete(int *a, int &n, int vt)
{
    //a = (int*)realloc( a, (n-1)*sizeof(int));
    for (int i = vt; i < n; i++)
        *(a+i) = *(a+i+1);
    n--;
}

void Delete_SNT_SCP( int *a, int &n)
{
    
    for (int i = 0; i < n; i++)
    {
        if ( ktSNT( *(a+i))==1 || ktSCP( *(a+i))==1 )
        {
            //cout<<"x";
            Delete( a, n, i);
            i--;
        }
    }
    cout<<"Display after delete: ";
    OutArr( a, n);
}

int main(int argc, char const *argv[])
{
    int n, x;
    cout<<"Enter n: ";
    cin>>n;
    int *a = new int [n];
    InArr( a, n);
    cout<<"Display Array: ";
    OutArr( a, n);
    
    Delete_SNT_SCP( a, n);
    delete[] a;
    return 0;
}
