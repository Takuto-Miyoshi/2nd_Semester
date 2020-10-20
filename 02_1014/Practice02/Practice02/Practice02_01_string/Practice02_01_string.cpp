
#include <stdio.h>
#include <stdlib.h>
#include <string>   // stringを使うためのヘッダー
#include <iostream> // C++で拡張された入出力用のヘッダー

int main(){
	// C言語の文字、文字列
	char word = 'a';					// 1文字
	char name[] = "miyoshi takuto";		// 文字配列
	const char* cstr = "Hello World";	// const char ポインタ

	// printf で画面に出力
	printf("%c \n", word);
	printf("%s \n", name);
	printf("%s \n", cstr);

	// string型
	std::string str1 = "wawawa";	// charと同じ
	std::string str2;				// 空っぽ
	std::string str3 = " ";			// 空っぽ
	std::string str4 = "ABC";		// "ABC"
	std::string str5("ABC");		// "ABC"
	std::string str6(3, 'A');		// "AAA"
	std::string str7 = str1;		// "wawawa"

	// C言語の関数でstring型に入力されている文字列を使うには
	// .c_str() という関数で、文字列のポインタを受け取る
	printf("%s \n", str1.c_str());

	// C++ の文字出力
	// std::cout << "文字列" << std::endl;
	// std::cout は <iostream> と <string> を #include しないと使えない
	// 改行("\n")は不要
	std::cout << str4 << std::endl;

	// 文字サイズを取得する
	// .size() か .length() を使う
	std::cout << "str5 size = " << str5.size()   << std::endl;	// str5 size = 3;
	std::cout << "str6 size = " << str6.length() << std::endl;	// str6 size = 3;

	printf("\n");

	// 文字の挿入
	// +=, .push_back(), .append(), .insert()
	std::cout << str1 << std::endl;
	str1 += "iwai";			// "wawawaiwai"			 末尾に文字列を追加
	std::cout << str1 << std::endl;
	str1.push_back('A');	// "wawawaiwaiA"		 末尾に１文字を追加
	std::cout << str1 << std::endl;
	str1.append("lalala");	// "wawawaiwaiAlalala"	 末尾に文字列を追加
	std::cout << str1 << std::endl;
	str1.insert(2, "FG");	// "waFGwawaiwaiAlalala" 指定した場所に文字列を追加
							// 4 なら 4文字目と5文字目の間に追加する
	std::cout << str1 << std::endl;

	printf("\n");

	// 文字の検索
	// .find()
	std::string str = "ABC ABC";
	int index = str.find("C");	// 2  先頭から１文字を探す
	std::cout << index << std::endl;
	index = str.find("BC");		// 1  先頭から文字列を探す
	std::cout << index << std::endl;
	index = str.find("BC", 2);	// 5  指定の位置から文字列を探す
	std::cout << index << std::endl;
	index = str.find("Z");		// -1 見つからなかった
								// 見つからなかった場合は　std::string::npos で判定する
	std::cout << index << std::endl;

	printf("\n");

	// 文字検索のあれこれ
	index = str.rfind("A");				// 後ろから検索
	std::cout << index << std::endl;
	index = str.find_first_of("ABC");	// 先頭から検索
	std::cout << index << std::endl;
	index = str.find_last_of("ABC");	// 後ろから検索
	std::cout << index << std::endl;
	index = str.find_first_not_of("AB");// 指定文字でない文字を、最初から検索
	std::cout << index << std::endl;
	index = str.find_last_not_of("BC");	// 指定文字でない文字を、後ろから検索
	std::cout << index << std::endl;

	// 文字の置き換え
	// .replace(何文字目, 何文字分, 置き換え文字列);
	str = "ABC ABC";
	std::string from = "BC ";
	std::string to   = "X";
	str.replace(str.find(from), from.size(), to);	// "AX ABC"
	std::cout << str << std::endl;

	// 文字の削除
	// .clear()
	str.clear();
	std::cout << str << std::endl;
	str += "A";
	std::cout << str << std::endl;


	system("pause");
	return 0;
}
