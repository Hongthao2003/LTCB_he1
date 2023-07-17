#include <iostream>
using namespace std;

bool SNT(int n)
{
	if (n<2){
		return false;
	}
	for (int i=2; i<(n-1); i++){
		if (n%i ==0){
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cout << "Nhap n vao de kiem tra :\n";
	cin >> n;
	if(SNT(n)){
		cout<< n<<" la SNT ";
}
else {
	cout<< n<< " khong phai la SNT";
}
return 0;
}
