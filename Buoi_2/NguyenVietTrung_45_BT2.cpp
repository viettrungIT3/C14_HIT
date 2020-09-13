#include <bits/stdc++.h>
using namespace std;
 
bool ktSNT(int n)
{
    if ( n < 2 )
    {
        return false;
    }
    for (int i = 2; i <= sqrt((float)n); i++)
    {
        if ( n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void phantich(int n)
{
    if ( ktSNT(n) )
    {
        cout<<n<<" la so nguyen to.";
    }
    else
    {
        cout<<n<<" khong phai so nguyen to."<<endl;
        cout<<"Phan tich ra thua so nguyen to: ";
        for ( int i = n; i >= 2; i--)
        {
            if ( ktSNT(i) )
            {
                while ( n % i == 0 )
                {
                    cout<<i;
                    if ( n!=i)
                    {
                    	cout<<"x";
					}
					n/=i;
				}
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 10 );
    phantich(n);
    return 0;
}
