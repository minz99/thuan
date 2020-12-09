#include<iostream>
using namespace std;
main()
{ 
    float a, b, x;
    cout<<"Giai phuong trinh bac nhat 1 an""\n";
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    if(a == 0)
    {
	  	if(b == 0)
    		cout<<"PT co vo so nghiem";
    	else
	  		cout<<"PT vo nghiem";
	}
    else
    {
    	x = (-b/a);
    	cout<<"Nghiem X la: "<<x<<endl;
	}
    return 0;
}
