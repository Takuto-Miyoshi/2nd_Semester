
#include <stdio.h>

#include "Test.h"

// staticメンバ変数の書き方
// 型名 クラス名::変数名 = 初期値
// (注)	staticメンバ変数は、宣言と別に実体を作っておく必要がある
//		実体を作る時は、必ず cpp 側に書くこと
int Test::staticValue = 0;
int Test::instanceCount = 0;

Test::Test() {
	value = 0;

	instanceCount++;
}

Test::~Test() {
	instanceCount--;
}

void Test::SetValue( int value_ ) {
	value = value_;
}

int Test::GetValue() {
	return value;
}

void Test::PrintValue() {
	printf( "       value = %d\n", value );
	printf( "static value = %d\n", staticValue );
}

void Test::PrintCount() {
	printf( "Instance Count = %d\n", instanceCount );
}

// staticメンバ関数の書き方
// 戻り値 関数名(引数)

void Test::SetStaticValue( int value_ ) {
	staticValue = value_;

	// staticメンバ関数の中では static でないメンバ変数を操作することはできない
	//value = value_; (エラー)

}
