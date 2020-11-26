#include<iostream>    //the twelfth subject
using namespace std;

void judge(int num) {
	for (int j = 1; j <= num; j++) {
		cout << num << " ";
	}
	cout << endl;
}
int main() {
	int i,mark=1;
	for (i = 1; i <= 5&&i>=1;) {
		mark++;
		if (mark <= 5) {
			judge(i);
			i++;
			}
		else{
			judge(i);
			i--;
		}
	}
	return 0;
}