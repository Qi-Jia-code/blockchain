#include<iostream>          //the forth subject
using namespace std;

int judge(int num) {
	int first,after, product,sum,flag=0;
	first = num % 100;
	after = num / 100;
	sum = first + after;
	product = sum*sum;
	if (product == num)
	{
		flag = 1;
	}
	else flag = 0;
	return flag;
}
int main() {

	int result;
	for (int i = 1000; i < 9999; i++) {
		result = judge(i);
		if (result == 1)
		{
			cout << i << " ";
		}
	}
	

	return 0;
}