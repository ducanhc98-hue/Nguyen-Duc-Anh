#include <iostream>
using namespace std;
int main()	{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	if((n<1)||(n>100)){
		cout<<"Du lieu khong hop le!";
		return 0; 
	}
	int a[n];
	for(int i=0; i<n; i++){
	cin>>a[i];
	}
	for(int i=0; i<n; i++) {
    cout<<a[i]<<"";
    }
	int min=a[0];
	for(int i=1;i<n;i++){
	if(a[i]<min){
	min=a[i];
}
}
cout<<"So nho nhat la:"<<min<<endl;
	return 0;
	}
		
