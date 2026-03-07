#include <iostream>
using namespace std;
int main()	{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
	cin>>a[i];
	}
	for(int i=0; i<n; i++) {
    cout<<a[i]<<"";
    }
	int min1=a[0];
	for(int i=1;i<n;i++){
	if(a[i]<min1){
	min1=a[i];
}
}
	int min2;
	for(int i=0; i<n;i++){
		if((a[i]!=min1)&&(a[i]<min2)){
			min2=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]=min2){
		cout<<"Vi tri so nho thu 2 la:"<<i<<endl;
		}
	}
	return 0;
	}
		
