#include <bits/stdc++.h>
using namespace std;

bool ktSoHoanHao(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if ( n % i == 0)
        {
            sum += i;
        }
        
    }
    if ( sum == 2*n)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}



int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Moi nhap n:";
        cin>>n;
        if ( n<=2 || n >= 10000000000 )
        {
            cout<<"Ban da nhap sai! Xin vui long nhap lai."<<endl;
        }
        
    } while ( n<=2 || n >= 10000000000 );
    cout<<"Day cac so hoan hao nho hon hoac bang "<<n<<" la:";
    for (int  i = 1; i <= n; i++)
    {
        if ( ktSoHoanHao(i) )
        {
            cout<<"\t"<<i;
        }
        
    }
    
    return 0;
}
