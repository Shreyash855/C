//This program multiplies two user defined matrices

#include<iostream>
using namespace std;
int main()
{
	int m,n,p,i,j,a[10][10],b[10][10];
	cout<<"\nEnter the number of number of rows and coumns of matrix 1: ";
	cin>>m>>n;
	cout<<"\nEnter the value of matricx of 1\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter a value";
			cin>>a[i][j];
		}
	}
	cout<<"\Matricx 1 : \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe number of matrix 2 will be "<<n;
	cout<<"\nEnter the columns of matrix 2: ";
	cin>>p;
	cout<<"\nEnter the elements of matrix 2:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<"Enter a value";
			cin>>b[i][j];
		}
	}
	cout<<"\nMatrix 2:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	void MatMul(int a[10][10],int b[10][10],int m,int n,int p);
	MatMul(a,b,m,n,p);
	return 0;
}

void MatMul(int a[10][10],int b[10][10],int m,int n,int p)
{
	int i,j,k,c[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			c[i][j] = 0;
			for(k=0;k<n;k++)
			{
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	cout<<"\nThe resultant matrix is : \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}
