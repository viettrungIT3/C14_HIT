#include <bits/stdc++.h>
using namespace std;

void Delete( char str[50], int k)
{
    int n = strlen(str);
    for (int i = k; i < n-1; i++)
    {
        str[i] = str[i+1];
    }
    str[n-1] = '\0';
}
void C(char str[])
{
    int i,j;
    for(i=0;i<strlen(str);i++)
    {
        // thay 0 bang khong
        if(str[i]=='0')
        {
            for(j=strlen(str)+3;j>i+4;j--)
            {
                str[j] = str[j-4];
            }
            str[i]='k';
            str[i+1]='h';
            str[i+2]='o';
            str[i+3]='n';
            str[i+4]='g';
        }
        // thay 1 bang mot
        if(str[i]=='1')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='m';
            str[i+1]='o';
            str[i+2]='t';
        }
        // thay 2 bang hai
        if(str[i]=='2')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='h';
            str[i+1]='a';
            str[i+2]='i';
        }
        // thay 3 bang ba
        if(str[i]=='3')
        {
            for(j=strlen(str);j>i+1;j--)
            {
                str[j] = str[j-1];
            }
            str[i]='b';
            str[i+1]='a';
        }
        // thay 4 bang bon
        if(str[i]=='4')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='b';
            str[i+1]='o';
            str[i+2]='n';
        }
        // thay 5 bang nam
        if(str[i]=='5')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='n';
            str[i+1]='a';
            str[i+2]='m';
        }
        // thay  6 bang sau
        if(str[i]=='6')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='s';
            str[i+1]='a';
            str[i+2]='u';
        }   
        // thay 7 bang bay
        if(str[i]=='7')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='b';
            str[i+1]='a';
            str[i+2]='y';
        } 
        // thay 8 bang tam
        if(str[i]=='8')
        {
            for(j=strlen(str)+1;j>i+2;j--)
            {
                str[j] = str[j-2];
            }
            str[i]='t';
            str[i+1]='a';
            str[i+2]='m';
        } 
        // thay 9 bang chin
        if(str[i]=='9')
        {
            for(j=strlen(str)+2;j>i+3;j--)
            {
                str[j] = str[j-3];
            }
            str[i]='c';
            str[i+1]='h';
            str[i+2]='i';
            str[i+3]='n';
        } 
    } 
}
int main(int argc, char const *argv[])
{
    char str[1000];
    int dem1 = 0, dem2 = 0, dem3 = 0;
    do
    {
        cout<<"Enter string: ";
        cin.getline(str,255);
    } while ( strlen(str) > 255);
    for (int i = 0; i < strlen(str); i++)
    {
        if ( str[i] >= 65 && str[i] <= 90 )
        {
            dem1++;
        }
        if ( str[i] >= 97 && str[i] <= 122 )
        {
            dem2++;
        }
        if ( str[i] >= 48 && str[i] <= 57 )
        {
            dem3++;
        }
    }
    cout<<"There are "<<dem1<<" uppercase letter."<<endl;
    cout<<"There are "<<dem2<<" lowercase letters."<<endl;
    cout<<"There are "<<dem3<<" numbers."<<endl;
    cout<<"Display reverse string: ";
    for (int i = strlen(str); i >= 0; i--)
    {
        cout<<str[i];
    }
    cout<<"\nString after convert: ";
    C(str);
    cout<<str;
    return 0;
}
