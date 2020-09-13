#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<setw(5)<<"Trau dung"<<setw(25)<<"Trau nam"<<setw(25)<<"Trau gia"<<endl;
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            int g = 100 - i -j;
            if ( i*5 + j*3 + 1.0*g/3 == 100)
            {
                cout<<setw(5)<<i<<setw(25)<<j<<setw(25)<<g<<endl;
            }
            
        }
        
    }
    
    return 0;
}
