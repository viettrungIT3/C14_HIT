#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n] = {1,0,1,9,9,8,8};
    int b[100], nb = 0;
    for (int i = 0; i < 10; i++)
    {
        int dem = 0;
        for (int j = 0; j < n; j++)
        {
            if ( a[j] == i )
            {
                dem++;
            }
        }
        b[nb] = dem;
        nb++;
    }
    cout<<"Ket qua cua so lan: "<<endl;
    //cout<<setw(5)<<"So"<<setw(5)<<"So lan"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if (b[i] != 0)
        {
            cout<<setw(5)<<i<<setw(5)<<b[i]<<endl;
        }
    }
    int max = b[0];
    for (int i = 1; i < 10; i++)
    {
        if (b[i] > max )
        {
            max = b[i];
        }
    }
    cout<<"Ket qua cua Max:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if (b[i] == max)
        {
            cout<<setw(5)<<i<<setw(5)<<b[i]<<endl;
        }
    }
    return 0;
}
