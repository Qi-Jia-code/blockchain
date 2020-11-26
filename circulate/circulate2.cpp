#include<iostream>          //the second subject
#include<math.h>
using namespace std;

int judge(int i) {
	int flag = 0;
	for (int j = 2; j <= sqrt(i); j++) {
		if (i % j == 0) {
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	return flag;
}

int main() {
	int num, i;
	int mark = 0;
	cout << "please enter the positive number that greater than 2" << endl;
	cin >> num;
	if (num < 2)
		return 1;
	for (i = 2; i < num; i++)
	{
		if (judge(i) == 0)
		{
			mark++;
			cout << i << " ";
		}
	}
	cout << " "<<mark;
	return 0;
}