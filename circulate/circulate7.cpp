#include<iostream>     //the seventh subject
using namespace std;

int judge(int x,int y) {
	while (y)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}

int main() {
	int x, y,result;
	cout << "please enter two number" << endl;
	cin >> x >> y;
	result=judge(x, y);
	cout << "the maximum common factor   " << result;

	return 0;
}