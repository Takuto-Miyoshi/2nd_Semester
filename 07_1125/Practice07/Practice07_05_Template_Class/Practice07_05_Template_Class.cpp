
#include <iostream>

#include "Position.h"

int main()
{
	// テンプレートクラスの使い方
	// クラス名<データ型> 変数名;
	// どの型のクラスを使うのかを明示する必要がある
	// Position iPos;	これではメンバ変数が何型かわからないためエラーがでる
	Position<int>	 iPos; // posX/Y をint型として扱うPositionクラス
	Position<float>	 iPos; // posX/Y をfloat型として扱うPositionクラス

	return 0;
}
