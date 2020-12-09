#include<iostream>
#include<math.h>
using namespace std;
int main()
{	float a,b,c,D,x,y;
	cout<<"Giai PT bac 2 dang: ax2 + bx + c = 0""\n";
	cout<<"\nNhap gia tri a:";
	cin>>a;
	cout<<"\nNhap gia tri b:";
	cin>>b;
	cout<<"\nNhap gia tri c:";
	cin>>c;
	D=b*b-4*a*c;
	if(D < 0)
		cout<<"\nPT vo nghiem";
	else{
		if(D = 0)
			cout<<"\nPT co nghiem kep x1 = x2 ="<<-b/(2*a);
		else
			x = (-b + sqrt(D))/(2*a);
			y = (-b - sqrt(D))/(2*a);
			cout<<"\nPT co 2 nghiem "<<"   \nNghiem x1 = "<<x<<"   \nNghiem x2 = "<<y<<endl;	
	}
	return 0;
}
