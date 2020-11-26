#include<iostream>    //the sixth subject
using namespace std;

int select(int *num) {
	int sum=0;
	for (int j = 1; j < *num; j++)
	{
		if (*num % j == 0) {
			sum = sum +j ;
		}
	}
	if (sum == *num) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	cout << "please enter a number" << endl;
	int num,mark;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		mark = select(&i);
		if (mark == 1)
			cout << "the perfect number is:" << i << endl;
	}
	return 0;
}