#include<iostream>     //the third subject
#include <iomanip>
using namespace std;
int main() {
	int num;
	double sum = 0;
	cout << "please enter the positive number" << endl;
	cin >> num;
	if (num < 0)
	{
		return 1;
	}
	for (int i = 1; i <= num; i++)
	{
		sum = sum + 1.0 /(3*i-2);
	}
	cout << setprecision(6) << sum;
	return 0;
}