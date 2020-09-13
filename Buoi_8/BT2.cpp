#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n] = {0}; //0,1,0,0,1,0    //1,1,0,0,1,0,0,1
    int dem = 0;
    
    if ( a[0] == 0  &&  a[1] != 0 )
        {
            dem++;
        }
        if ( a[n-1] == 0  &&  a[n-2] != 0 )
        {
            dem++;
        }
    for (int i = 2; i < n-1; i++)
    {
        if ( a[i-2] == 0 && a[i-1] == 0 && a[i] != 0 )
        {
            dem++;
        }
    }
    if (n == 1 && a[0] == 0)
    {
        dem = 1;
    }
    cout<<"Ket qua: "<<dem;
    return 0;
}
