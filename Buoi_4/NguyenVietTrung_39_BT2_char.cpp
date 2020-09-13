#include <bits/stdc++.h>
using namespace std;

void Delete( char str[], int vt, int dem)
{
    for (int i = vt; i < strlen(str); i++)
    {
        str[i] = str[i+1];
    }
    str[ strlen(str)] = '\0';
}

// void Insert32( char str[], int vt)          // Bỏ
// {
//     int n =strlen(str);
//     str[strlen(str)+1] ='\0';
//     for (int i = n-1; i >= vt; i--)
//     {
//         str[i] = str[i-1];
//     }
//     n++;
//     str[vt] = ' ';

//     str[strlen(str)+1] ='\0';
// }

void Form( char str[])
{
    while ( str[0] == 32 && strlen(str) > 0 )
    {
        Delete( str, 0, 1);
        //cout<<str;
    }
    while ( str[strlen(str) -1] == 32 && strlen(str) > 0 )
    {
        Delete( str, strlen(str) -1, 1);
        //cout<<str;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if ( str[i] == 32 && str[i+1] == 32 )
        {
            Delete( str,i, 1);
            i--;
        }
        if ( str[0] >= 97 && str[0] <= 122)
        {
            str[0] -= 32;
            str[0] = char(str[0]);
        }
        if ( str[i] == 32 && (str[i+1] == 44 || str[i+1] == 46 ) )
        {
            Delete( str, i, 1);
            i--;
        }
        if ( (str[i] == 44 || str[i] == 46 ) && str[i+1] != 32)
        {
            // Insert32( str, i+1);
            // i--;
            for(int j = strlen(str); j > i+1; j--)
			{
				str[j] = str[j-1];
			}
			str[i+1] = ' ';
				i--;
				str[strlen(str)+1] = '\0';
        }
        if ( str[i] == '.' )
        {
            if ( str[i+2] >= 97 && str[i+2] <= 122)
            {
                str[i+2] -= 32;
                str[i+2] = char(str[i+2]);
            }
        }
    }
}


int main(int argc, char const *argv[])
{
    char str[260];
    do
    {
    cout<<"Enter string: ";
    gets(str);
    } while ( strlen(str) >= 256 );
    Form( str);
    cout<<"Display string after convert: "<<endl;
    puts( str);
    return 0;
}
