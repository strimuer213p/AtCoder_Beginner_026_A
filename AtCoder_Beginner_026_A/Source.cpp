/*
��蕶
���̋��� A ���^������B
x+y=A �ƂȂ鐳�̐��� x, y �̂����A x�~y ���ő�ƂȂ���̂�I�сA���̒l���o�͂��Ȃ����B
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