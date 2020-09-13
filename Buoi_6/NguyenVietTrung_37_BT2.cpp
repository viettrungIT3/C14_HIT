#include <bits/stdc++.h>
using namespace std;

void InArr( int *a, int n)
{
    cout<<"Enter in the array "<<n<<" integers:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(a+i);
    }
}

void OutArr( int *a, int n)
{
    //cout<<"Display the array:";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<*(a+i);
    }
}

bool ktSNT(int n)
{
    if (n < 2)    
    {
        return false;
    }
    for (int i = 2; i <= sqrt((float)n); i ++)
    {
        if ( n%i == 0 )
        {
            return false;
        }
    }
    return true;
}

void Insert_k( int *a, int &n, int vt, int k)
{
    for (int i = n; i > vt; i--)
    {
        *(a+i) = *(a+i-1);
    }
    *(a+vt) = k;
    n++;
}

void Insert( int a[], int &n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if ( ktSNT(a[i]) )
        {
            if ( ktSNT(k) )
            {
                Insert_k( a, n, i+1, k);
                i++;
            }
            else
            {
                Insert_k( a, n, i+1, k);
            }
        }
    }
}

void Delete( int *a, int &n, int vt)
{
    for (int i = vt; i < n; i++)
    {
        *(a+i) = *(a+i+1);
    }
    n--;
}

void Delete_SNT( int *a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        if ( ktSNT(*(a+i)) )
        {
            Delete( a, n, i);
            i--;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, k;
    cout<<"Enter n: ";
    cin>>n;
    int *a = new int[n];
    InArr( a, n);
    cout<<"Enter k: ";
    cin>>k;
    Insert( a, n, k);
    cout<<"Display after insert: ";
    OutArr( a, n);
    Delete_SNT(a, n);
    cout<<"\nDisplay after delete: ";
    OutArr( a, n);
    delete a;
    return 0;
}
