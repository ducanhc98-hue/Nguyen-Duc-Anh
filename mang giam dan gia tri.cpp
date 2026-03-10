#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Mang vua nhap la:";
    for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]<a[j]){
        int x= a[i];
        a[i]= a[j];
        a[j]= x;
        }
        }
    }
    for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
    }
return 0;
}
