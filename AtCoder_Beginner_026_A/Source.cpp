/*
問題文
正の偶数 A が与えられる。
x+y=A となる正の整数 x, y のうち、 x×y が最大となるものを選び、その値を出力しなさい。
*/

#include<iostream>

int main() {
	int num,multi,max=0;

	std::cin >> num;

	for (int i = 1; i < num/2+1; i++) {
		multi = i*(num - i);
		if (max < multi) {
			max = multi;
		}
	}

	std::cout << max << std::endl;

	return 0;
}