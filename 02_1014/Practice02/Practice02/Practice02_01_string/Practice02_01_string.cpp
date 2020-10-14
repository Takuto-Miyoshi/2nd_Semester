
#include <stdio.h>
#include <stdlib.h>
#include <string>   // stringを使うためのヘッダー
#include <iostream> // C++で拡張された入出力用のヘッダー

int main()
{
	// C言語の文字、文字列
	char word = 'a';					// 1文字
	char name[] = "miyoshi takuto";		// 文字配列
	const char* cstr = "Hello World!";	// const char ポインタ型

	// 課題：上記３つの文字、文字列をprintfで画面に出力する
	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	// string型の書き方(初期化方法色々)
//	std::string str = "文字列";
//	std::string str;			// ""(空っぽ)
//	std::string str = "";		// ""(空っぽ)
//	std::string str = "ABC";	// "ABC"
//	std::string str("ABC");		// "ABC"
	std::string str2(3, 'A');	// "AAA"
	std::string str = str2;		// "AAA"

	// C言語の関数でstring型に入力されている文字列を使うには
	// .c_str()という関数で、文字列のポインタを受け取る必要がある
//	printf("str = %s\n", str.c_str() );

	// C++的な書き方(iostreamとstrinigのインクルードが必要)
	std::cout << str << std::endl;

	// 文字サイズを取得 .size() or .length()
	std::cout << "str size = " << str.size() << std::endl;

	// 文字の挿入 +=, push_back(), append(), insert()
	str += "BBC";			// "AAABBC"		末尾に文字列を追加
	str.push_back('D');	// "AAABBCD"	末尾に１文字を追加
	str.append("EE");		// "AAABBCDEE"	末尾に文字列を追加
	str.insert(1, "FG");	// "AFGAABBCDEE"指定の場所に、文字列を追加
	std::cout << str << std::endl;

	// 文字の検索 .find()
	str = "ABC ABC";
	int index = str.find('C');	// 2 先頭から１文字を探す
	index = str.find("BC");	// 1 先頭から文字列を探す
	index = str.find("BC", 2);	// 5 指定の位置(2)から文字列を探す
	index = str.find("Z");	// -1 だがstd::string::nposを使って判定する
	// 他にも
	// .rfind()			後ろから検索
	// .find_first_of()	指定文字を、先頭から検索
	// .find_last_of()	指定文字を、最後から検索
	// .find_first_not_of()	指定文字でない文字を、最初から検索
	// .find_last_not_of()	指定文字でない文字を、最初から検索

	// 文字の置き換え .replace(何文字目、何文字分、置き換え文字列)
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);	// "AX ABC"
	std::cout << str << std::endl;

	// 文字の削除 .clear()
	str.clear();
	std::cout << str << std::endl;

	system("pause");
	return 0;
}