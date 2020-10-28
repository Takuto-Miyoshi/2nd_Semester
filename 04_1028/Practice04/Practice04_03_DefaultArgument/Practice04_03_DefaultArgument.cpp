
#include <iostream>

// デフォルト引数
// 関数の引数にはデフォルト値を設定することができる
// デフォルト値が設定された引数は、関数の呼び出し時に省略することができる
class Calculator {
public:
	int Add( int a, int b );
	int Mul( int a, int b = 2 );
	
private:

};

int Calculator::Add( int a, int b ) {
	return ( a + b );
}

int Calculator::Mul( int a , int b ) {
	return ( a * b );
}

int main(){
	Calculator calc;
	std::cout << calc.Add( 10, 20 ) << std::endl;
	std::cout << calc.Mul( 30 ) << std::endl;
}
