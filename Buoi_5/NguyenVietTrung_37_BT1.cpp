#include <bits/stdc++.h>
using namespace std;

void InArr( int *a, int n)              //-Input : n=10; -2 -3 1 1 0 3 1 0 0 0
{
    cout<<"Enter an Array of "<<n<<" number: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(a+i);
    }
}

void OutArr( int *a, int n)
{
    //cout<<"Display Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"  "<<*(a+i);
    }
}

void case_a(int *a, int n, int *b, int &nb, int *c, int &nc,int *d, int &nd)
{
	int j=0,k=0;

	for(int i = 0; i < n; i++)
	{
		if (*(a+i) > 0 )
		{
			*(c+j)=*(a+i);
			j++;
		}else if( *(a+i) < 0 )
		{
		*(b+k) = *(a+i);
	 		k++;
		}
		nc=j;
		nb=k;
	}
	int m=0,l=0;
	for( int i=0;i<n;i++)
	{
		if(*(a+i)==0)
		{
		cout<<" "<<*(a+i);
		}
	}
	
	if(nb==nc)
	{
		nd=nb+nc;
		for(int i =0;i<nb+nc;i++)
		{
			if(i%2==0)
			{
				*(d+i)=*(b+m);
				m++;
			}else
			{
				*(d+i)=*(c+l);
				l++;	
			}
		}
		OutArr(d,nd);
	}
	if( nb < nc)
	{
		nd=nb+1;
		for(int i =0;i<=nb;i++)
		{
			if(i%2==0)
			{
				*(d+i)=*(b+m);
				m++;
			}else
			{
				*(d+i)=*(c+l);
				l++;	
			}
		}
		OutArr(d,nd);
		for(int j=l;j<nc;j++)
		{
			cout<<" "<<*(c+j);
		}
	}
	if(nb>nc){
		nd = nc+1;
		for(int i = 0; i <= nc; i++)
		{
			if(i%2==0)
			{
				*(d+i)=*(b+m);
				m++;
			}else
			{
				*(d+i)=*(c+l);
				l++;	
			}
		}
		OutArr(d,nd);
		for(int j=m;j<nb;j++){
			cout<<" "<<*(b+j);
		}
	}		
}

void case_b(int *a, int n, int *b, int &nb, int *c, int &nc)
{
	cout<<endl;
	OutArr(c,nc);
	OutArr(b,nb);
	for( int i=0;i<n;i++)
	{
		if(*(a+i)==0)
		{
		cout<<" "<<*(a+i);
		}
	}
}


int main(int argc, char const *argv[])
{
    int *a = NULL;
	int *b = NULL;
	int *c = NULL;
	int *d = NULL;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    a = new int[n];
    InArr( a, n);
    //OutArr( a, n);
    cout<<endl;
    int nb =0;
	b = new int[nb];
	int nc =0;
	c = new int[nc];
    int nd;
	d = new int[100];
    case_a(a , n, b, nb, c, nc, d, nd);
    cout<<endl;
    case_b( a, n, b, nb, c, nc);
    return 0;
}
