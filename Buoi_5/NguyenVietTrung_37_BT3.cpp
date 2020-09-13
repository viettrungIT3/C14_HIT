#include <bits/stdc++.h>
using namespace std;

void InArr(char letter, int *a, int n)
{
    cout<<"Enter an Array"<<letter<<" of "<<n<<" number: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(a+i);
    }
}

int main(int argc, char const *argv[])
{
    int *a = NULL;
    int *b = NULL;
    int n, m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"ENter m: ";
    cin>>m;
    a = new int[n];
    b = new int[m];
    InArr( 'A', a, n);
    InArr( 'B', b, m);
    int MinA= *(a+0);
    for (int i = 1; i < n; i++)
    {
        if ( MinA > *(a+i) )
        {
            MinA = *(a+i);
        }
    }
    int MaxB= *(b+0);
    for (int i = 1; i < m; i++)
    {
        if ( MaxB < *(b+i) )
        {
            MaxB = *(b+i);
        }
    }
    int SumA = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) > 0 )
        {
            SumA += *(a+i);
        }
    }
    int SumB = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(b+i) < 0 )
        {
            SumB += *(a+i);
        }
    }
    SumB = abs(SumB);
    // cout<<"MinA = "<<MinA<<endl;
    // cout<<"MaxB = "<<MaxB<<endl;
    // cout<<"SumA = "<<SumA<<endl;
    // cout<<"SumB = "<<SumB<<endl;
    
    if ( SumA == SumB)
    {
        if ( (n<m) && (MinA > MaxB))
        {
            cout<<"VCVL"<<endl;
        }
        else if ( (n < m) || (MinA > MaxB) )
        {
            cout<<"VL"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
    else if ( (n<m) && (MinA)>MaxB)
    {
        cout<<"VL"<<endl;
    }
    else if ( MinA > MaxB)
    {
        cout<<">"<<endl;
    }
    else if ( n < m )
    {
        cout<<"<"<<endl;
    }
    return 0;
}
