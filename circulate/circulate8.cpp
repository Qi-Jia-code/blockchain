#include<iostream>   //the eighth subject
#include<math.h>
using namespace std;

int judge(int num) {
	int x = num*num;
	int y = num;
	int flag = 0;
	int mark=0;
	while (num!=0) {
		num /= 10;
		mark++;
	}
		x %= (int)pow(10, mark);
		if (y == x)
		{
			flag = 1;
		}
	 return flag;
}
int main() {
	int i;
	cout << "the ISO number is" << endl;
	for (i = 1; i < 100000; i++) {
		int x = judge(i);
		if ( x== 1) {
			cout << i << " ";
		}

	}
}