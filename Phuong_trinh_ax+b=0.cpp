#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
    double x;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    if(a == 0) {
        if (b == 0) {
            cout << "Phuong trinh VSN" << endl;
        } else {
            cout << "Phuong trinh VN" << endl;
        }
    } else {
        x = (double)-b/a;
        cout << "Phuong trinh co nghiem la: " << x << endl;
    }
    return 0;
}
