#include<iostream>
using namespace std;
int main()
{	int thang;
	cout<<"\nNhap vao thang hop le (1 -> 12 ): ";
	cin>>thang;
	if(thang == 4 || thang == 6 || thang == 9 || thang ==11)
	{
		cout << "\nThang "<<thang<<" co 30 ngay";
	}
	else 
	
		if(thang == 2)
			cout << "\nThang "<<thang<<" co 28 ngay";
		else
			cout<< "\nThang "<<thang<<" co 31 ngay";

	return 0;
}
