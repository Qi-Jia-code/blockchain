#include<iostream>    //the first subject
using namespace std;
int main() {
	int num,max;
	cout << "please enter the positive number" << endl;
	cin >> num;
	max = num;
	do {
		if (num < 0)
			return 1;
		cin >> num;
		if (num >= max)
			max = num;
	} while (num != 0);
	cout << "the biggest number you enter is:" << max;
	return 0;
}