#include <iostream>

using namespace std;

int main()
{
	int m,n;
	cout<<"enter number of row: "<<endl;
	cin>>m;
	cout<<"enter number of column: "<<endl;
	cin>>n;
	
	for(int i= 1 ; i<=m ; i++)
	{
		for(int j = 1; j<=n ; j++)
			cout<<i*j<<'\t';
			cout<<endl;
	}
}