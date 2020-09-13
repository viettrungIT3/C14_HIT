#include <bits/stdc++.h>
using namespace std;

void Delete( char str[50], int k)
{
    int n = strlen(str);
    for (int i = k; i < n-1; i++)
    {
        str[i] = str[i+1];
    }
    str[n-1] = NULL;
}

void Form(char str[50])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if ( str[0] == ' ' ) // str[0] = 32
        {
            Delete(str, 0);
            i--;
        }
        else if ( str[i] == ' ' && str[i+1] == ' ' )
        {
            Delete( str, i);
            i--;
        }
    }
    if ( str[strlen(str) -1] == ' ' )
    {
        Delete( str, strlen(str) -1);
    }
}

void dem( char str[50])
{
    int dem = 0;
    for (int i = 0; i < strlen( str); i++)
    {
        if ( str[i] == ' ' )
        {
            dem++;
        }
    }
    cout<<"Trong chuoi co "<<dem+1<<" tu."<<endl;
}

void dem2( char str[50])
{
    cout<<setw(10)<<"Ki tu"<<setw(15)<<"So luong"<<endl;
    for (int j = 0; j <= 255; j++)
    {
        int dem = 0, i;
        for ( i = 0; i < strlen( str); i++)
        {
            if ( str[i] == j )
            {
                dem++;
            }
        }
        if ( dem != 0 )
        {
            //char c = (char)j;
            cout<<setw(10)<<(char)j<<setw(15)<<dem<<endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[50];
    cout<<"Nhap 1 chuoi: ";
    gets( str);
    Form( str);
    puts( str);
    //cout<<str;
    dem( str);
    dem2( str);
    return 0;
}
