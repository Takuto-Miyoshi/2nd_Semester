
#include <iostream>

/*
オペレーターとは演算子のこと
=, +, -, *, /, %, += など

書き方
	戻り値の型 operator 演算子(引数){
		return 戻り値
	}

それぞれの意味
	戻り値の型
		オペレーターの処理結果の戻り値の型

	演算子
		ほとんどの演算子を使用することができる
		ただし「.」「::」「?」「*(ポインタ)」はできない

	引数
		演算子の右辺にあたる値の型
		下記の例 t + 100 では + の右側にある 100 の型( int型 )
*/

class Test{
public:
	Test( int val ) :m_Val( val ){

	}

	// Test と int を足し算するための + オペレーター
	int operator + ( int val ){
		return ( m_Val + val ) * 100;
	}

private:
	int m_Val;
};

int main()
{
	Test t( 10 );
	int ans = t + 100;
	std::cout << "ans = " << ans << std::endl;

	return 0;
}
