#include<iostream>          //the tenth subject
using namespace std;

int judge(int num) {
	int temp,temp1;
	int flag = 1;
	while (num) {
		temp = num %10;
		num /= 10;
		temp1 = num% 10;
		if (temp != temp1) {
			flag = 0;
			break;
		}
		num /= 10;
	}
	return flag;
}
int main() {
	int i;
	cout << "the perfect aabb number is:" << endl;
	for (i = 1000; i < 10000; i++)
	{
		if (judge(i) == 1) {
			cout<< i << " ";
		}
	}
	return 0;
}