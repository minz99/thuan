#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{	
	int r = rand();
	int x;
	cout<<"So ngau nhien la: " << r << endl;
	
	do{
		cout<<"Nhap x: ";
		cin >> x;
		if(x < 50) 
			cout<<0<<endl;
		if(x > 50)
			cout<<1<<endl;
	}
	while(x != 50);
}
