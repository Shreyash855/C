#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"\nEnter a number : ";
	cin>>n;
	cout<<"\nBinary form of the number is : ";
	for(i=15;i>=0;i--)
	{
		cout<<n/(int)pow(2,i);
		n=n%(int)(pow(2,i));
	}
	return 0;
}
