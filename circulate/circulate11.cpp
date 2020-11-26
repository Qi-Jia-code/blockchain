#include<iostream>    //the eleven subject
using namespace std;

int judge(int num) {
	int mark = 0;
	int x = num;
	int i,flag=1;
	int arr[10];
	while (num) {
		num /= 10;
		mark++;
	}
	for (i = 0; i < mark; i++) {
		int temp =x% 10;
		arr[i] = temp;
		x /= 10;
	}
	for (i = 0; i < mark/2; i++) {
		if (arr[i] != arr[mark - 1 - i]) {
			flag = 0;
			break;
		}
	}
	return flag;
}
int main() {
	cout << "The Palindrome number is" << endl;
	for (int i = 11; i <= 999; i++) {
		if (judge(i) == 1 && judge(i * i) == 1 && judge(i * i * i) == 1)
			cout << i << " ";
	}
	return 0;
}