#include <iostream>
using namespace std;

int main(){
	int n, a, tong; //a dung de tach cac so cua n
	cout << "Nhap n: ";
	cin >> n;
	for(;n!=0;){
	a = n%10;
	tong +=a;
	n/=10;	
	}
	cout << " Tong cac chu so cua la "<< tong << endl;
	return 0;
}
