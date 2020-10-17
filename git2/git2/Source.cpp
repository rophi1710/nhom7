#include"iostream"
using namespace std;

void main()
{
	int a;
	int dt;
	cout << "nhap canh hinh vuong";
	cin >> a;
	dt = a * a;
	cout << "dien tich hinh vuong la :" << dt << endl;
	int cd, cr;
	cout << "nhap chieu dai hinh chu nhat:";
	cin >> cd;
	cout << "nhap chieu rong hinh chu nhat:";
	cin >> cr;
	dt = (cd*cr);
	cout << "dien tich hinh chu nhat la:" << dt << endl;
	int pi = 3.14;
	int d;
	cout << "nhap ban kinh hinh tron";
	cin >> d;
	dt = d * d*3.14;
	cout << "dien tich hinh tron la:" << dt << endl;

	
	system("pause");
	
}