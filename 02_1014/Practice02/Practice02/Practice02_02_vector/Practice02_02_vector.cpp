
#include <stdio.h>
#include <stdlib.h>
#include <vector>   // ベクタークラスを使うためのヘッダー
#include <iostream>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	// vectorクラスの変数を使うときの書き方
	// std::vector<型名> 変数名;
	std::vector<int> v1;				// 配列の要素０
	std::vector<int> v2 = { 0, 1, 2 };	// 要素３、0, 1, 2で初期化
	std::vector<int> v3{ 0, 1, 2 };		// 要素３、0, 1, 2で初期化
	std::vector<int> v4{ 6, -1 };		// 要素６、すべてを-1で初期化
	std::vector<int> v5(8);				// 要素８、すべてを0で初期化
	std::vector<int> v6 = v5;			// v6をv5の内容で初期化

	// 値の代入
	// 配列と同じように[]を使える
	v5[0] = 10;
	for (int i = 0; i < v5.size(); i++) {
		std::cout << v5[i] << std::endl;
	}

	// 配列のサイズを確認
	// .size()
	int size = v5.size();
	std::cout << size << std::endl;

	printf("\n");

	// ランダムで値を設定して、配列の要素の中身をすべて表示する
	for (int i = 0; i < v5.size(); i++) {
		v5[i] = rand() % 1000;
		std::cout << v5[i] << std::endl;
	}

	printf("\n");


	for (int i = 0; i < v5.size(); i++) {
		v5[i] = 0;
		std::cout << v5[i] << std::endl;
	}
	// 要素の追加
	// .push_back(), .insert()
	v5.push_back(10);				// 末尾に要素を追加して10で初期化する
	for (int i = 0; i < v5.size(); i++) {
		std::cout << v5[i] << std::endl;
	}
	printf("\n");
	v5.insert(v5.begin() + 1, 100);	// 先頭から +1番目に100を追加する
	for (int i = 0; i < v5.size(); i++) {
		std::cout << v5[i] << std::endl;
	}

	// 要素の削除
	// .pop_back(), .erase()
	v5.pop_back();			// 要素の末尾を削除
	v5.erase(v5.begin());	// 要素の先頭を削除
	for (int i = 0; i < v5.size(); i++) {
		std::cout << v5[i] << std::endl;
	}

	printf("\n");

	// 全要素の削除
	// .clear()
	v5.clear();
	std::cout << "v5 size = " << v5.size() << std::endl;

	// 要素が0かを調べる
	// .empty()
	if (v5.empty() == true) {
		printf("v5 is empty\n");
	}

	// 要素数を変更する
	// .resize()
	v5.resize(5);		// 要素数を５に変更
	v5.resize(3);		// 要素数を３に変更
	v5.resize(6, -1);	// 要素数を６に変更して、増加分を-1で初期化


	for (int i = 0; i < v5.size(); i++) {
		std::cout << v5[i] << std::endl;
	}

	printf("\n");
	
	// あらかじめ最大数がわかっている場合は
	// .reserve() で領域を確保しておくと素早く処理ができる
	v5.reserve(100);	// 要素数１００までは素早く処理できる

	system("pause");
	return 0;
}
