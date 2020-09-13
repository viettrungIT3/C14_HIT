#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "1+2+4-5";
    int tong = 0, vt;
    for (int i = 0; i < str.length(); i++)
    {
        if (  str[i] >=48 && str[i] <= 57 )
        {
            tong += str[i]-48;
            vt = i;
            break;
        }
    }
    
    for (int i = vt+1; i < str.length(); i++)
    {
        if (  str[i] >= 48 && str[i] <= 57 )
        {
            if ( str[i-1] == 45 )
            {
                tong -= ((int)str[i]-48);
                i++;
            }
            if ( str[i-1] == 43 )
            {
                tong += ((int)str[i]-48);
                i++;
            }
        }
        //cout<<"Ket qua: "<<tong<<endl;
    }
    // while (i)
    // {
    //     /* code */
    // }
    
    cout<<"Ket qua: "<<tong<<endl;
    return 0;
}
