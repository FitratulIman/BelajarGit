#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char nama [100][10];
	int harga [100], i, total=0, n;
	cout<<"Jumlah Barang= ";cin>>n;
	for (i=0; i<n; i=i+1)
	{
		cout<<"Nama Barang"<<i <<"= ";cin>>nama[i];
		cout<<"Harga Barang"<<i <<"= ";cin>>harga[i];
		total=total+harga[i]; cout<<endl;
	}
	cout<<endl;
	for (i=0; i<n; i=i+1)
	{
		cout<<"Nama Barang"<<i <<"= " <<nama[i]; cout<<endl;
		cout<<"Harga Barang"<<i <<"= " <<harga[i]; cout<<endl;
	}
	cout<<"Total Bayar=" <<total;
	return 0;
}

