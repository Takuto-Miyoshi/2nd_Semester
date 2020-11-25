
#include <iostream>

/*
テンプレート - Template -

C++のテンプレートとはクラスのメンバ変数や関数の引数や戻り値を定義する際、あいまいな状態で定義できる機能

書式例

template <typename パラメータ名>
パラメータ名 関数名(パラメータ名 引数1, パラメータ名 引数2 ...){
	処理
}
*/

template <typename T>
T CalcSum( T a, T b ){
	return ( a + b );
}

// 半径r と円周率pi を渡し、円の面積を計算する関数
// piは整数かもしれないし、実数かもしれない
template <typename T, typename U>
double CalcCircleArea( T r, U pi ){
	return ( r * r ) * pi;
}

int main()
{
	std::cout << "int   CalcSum( 10,    10 )   = " << CalcSum( 10, 10 )		  << std::endl;
	std::cout << "float CalcSum( 20.0f, 20.0f) = " << CalcSum( 20.0f, 20.0f ) << std::endl;

	std::cout << "int r, float pi CalcCircleArea = " << CalcCircleArea( 5, 3.14f ) << std::endl;
	std::cout << "int r, int   pi CalcCircleArea = " << CalcCircleArea( 10, 3 )	   << std::endl;
	
	return 0;
}
