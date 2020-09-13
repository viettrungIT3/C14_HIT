#include <bits/stdc++.h>
using namespace std;

int GDC(int a, int b) {
    if (b == 0) 
    {
        return a;
    }
    return GDC(b, a % b);
}

int main(int argc, char const *argv[])
{
    int TS, MS, temp;
    do
    {
        cout<<"Nhap TS: ";
        cin>>TS;
        cout<<"Nhap MS: ";
        cin>>MS;
    } while ( TS  < 0 || MS <= 0);
    if ( TS == 0 )
    {
        cout<<"Ket qua: 0";
    }
    else
    {
        cout<<"Phan so dang rut gon la: "<<(float)TS/GDC(TS, MS)<<"/"<<(float)MS/GDC(TS, MS)<<endl;
    }
    
    return 0;
}
