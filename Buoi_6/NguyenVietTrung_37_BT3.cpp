#include<bits/stdc++.h>
using namespace std;

void InArr(int a[], int n , int b[],int nb)
{
    cout<<"Enter aray A: "<<endl;
	for(int i = 0; i < n; i++){
		cout<<"\tA["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<endl;
    cout<<"Enter aray B: "<<endl;
	for(int i = 0; i < nb; i++){
		cout<<"\tB["<<i<<"]: ";
		cin>>b[i];
	}
} 

void OutArr(int a[], int n , int b[],int nb)
{
	cout<<"Array A:";
	for(int i=0; i<n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	cout<<"Array B:";	
	for(int i=0; i<nb;i++){
		cout<<b[i]<<"  ";
	}
}

void Fimd_x( int a[], int na, int x)
{
	int dem=0;
	for(int i = 0; i < na; i++)
	{
		if(a[i]==x) dem++;
	}
	if( dem == 0 ){
		cout<<"Khong co gia tri x "<<endl;
	}else cout<<"Co gia tri thoa x "<<endl;
}

void giao( int a[], int b[], int c[], int na, int nb, int &nc)
{
	for( int i = 0; i < na; i++)
	{
		for(int j = 0; j < nb; j++)
		{
			if( a[i] == b[j] )
			{
				c[nc] = a[i];
				nc++;
				i++;
				j++;
			}
		}
	}
	for(int i = 0; i < nc; i++){
		cout<<c[i]<<"  ";
	}
}

void Delete( int a[], int &n, int vt)
{
    for (int i = vt; i < n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}

void NOT( int a[], int b[],int c[], int d[], int na, int nb, int nc, int &nd)
{
	for( int i = 0; i < na; i++)
	{
        d[nd] = a[i];
        nd++;
	}
	for(int i = 0; i < nc; i++){
		for (int j = 0; j < nd; j++)
        {
            if ( c[i] == d[j] )
            {
                Delete( d, nd, j);
            }
        }
	}
    for(int i = 0; i < nd; i++){
		cout<<d[i]<<"  ";
	}
    	
}

int main(int argc, char const *argv[])
{
    int a[100], b[100], c[100], d[100];
	int na, nb, nc = 0, nd = 0;
	int x;
	cout<<"Enter na:";
	cin>>na;
    cout<<"Enter nb:";
	cin>>nb;
	InArr( a, na, b, nb);
	OutArr( a, na, b, nb);
	cout<<"\nEnter x: ";
	cin>>x;
	cout<<"Array A :";
	Fimd_x( a, na, x);
	cout<<"Array B :";
	Fimd_x( b, nb, x);
	cout<<"\nMang giao cua hai mang la :";
	giao( a, b, c, na, nb, nc);
	cout<<"\nMang ma gia tri cua A co ma B ko co: ";
	NOT( a, b, c, d, na, nb, nc, nd);
    return 0;
}
