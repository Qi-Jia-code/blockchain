#include<iostream>         //the fourth subject
using namespace std;
int main() {
	int sum = 0;
	int k, num;
	cout << "please enter the number" << endl;
	cin >> num;
	if(num<0)
	{
		return 1;
	}
	while (num != 0)
	{
		k = num % 10;
		if (k % 2 == 0)
			sum = sum + k;
		num /= 10;
	}
	cout << "the sum is:" << sum;
}