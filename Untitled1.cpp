#include <iostream>
using namespace std;
int main()	{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	if ((n<1) || (n>100)) {
        cout<<"Diem khong hop le! Hay nhap tu 1-100.";
        }else {
        cout << "Loai hoc luc cua Nam la:";
		if(n>=85)	{
		cout<<"Gioi";
		}else if((n>=70)&&(n<85))	{
			cout<<"Kha";
		}else if((n>=50)&&(n<70))	{
			cout<<"Trung Bình";
		}else{
			cout<<"Yeu";	
		}
	}
	cout<<"a nam dep trai"<<endl;
	return 0;
}

