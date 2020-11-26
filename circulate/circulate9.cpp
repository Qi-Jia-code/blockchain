#include<iostream>    //the ninth subject
#include<iostream>
using namespace std;

int func(int num) {
	int temp,flag = 0;
	temp = (int)sqrt(num);
	if (temp * temp == num)
		flag = 1;
	return flag;
}
int judge(int num) {
	int flag1=0;
	num += 100;
	if (func(num) == 1) {
		num += 168;
		if (func(num) == 1) {
			flag1=1;
		}
	}
	return flag1;
}
int main() {
	int i;
	cout << "the perfect square is" << endl;
	for (i = 1; i < 1000000; i++) {
		if (judge(i) == 1)
			cout << i << " ";
	}
	return 0;
}