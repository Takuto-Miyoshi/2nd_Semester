#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));

	std::vector<int> v1(8);	// 要素数8 すべて0で初期化

	// iteratorを使ったfor文の回し方
	// for(int i = 0; i < v1.size(); i++) と意味は同じ

	// 型：std::vector<int>::iterator
	std::vector<int>::iterator itr;
	for (itr = v1.begin(); itr != v1.end(); ++itr) {
		*itr = rand();
		printf("%d\n", *itr);
	}
	printf("\n");

	system("pause");
	return 0;
}