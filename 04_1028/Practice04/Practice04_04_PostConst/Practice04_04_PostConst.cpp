
#include <iostream>

// 後置const関数 = コンストメンバ関数
// 戻り値 関数名(引数) const;
class Test {
public:
	void SetValue( int value );
	int GetValue() const;

private:
	int value;
};

void Test::SetValue( int value_ ) {
	value = value_;
}

// コンストメンバ関数の定義部分にも後置constをつける
int Test::GetValue() const {
	// コンストメンバ関数の中では、メンバ変数に対する値の代入を行う事ができない
	// コンストメンバ関数を呼び出す際、内部のメンバ変数への代入操作を行わないことが保証される
	// コンストメンバ関数以外の関数を呼び出すこともできない

	return value;
}

int main()
{
	Test test;
	test.SetValue( 1000 );
	int ans( test.GetValue() );

	std::cout << ans << std::endl;

	// データを取得したいだけの時
	// ポインタ変数のアドレスの先に変更を加えないことを保証するため
	// const ポインタ変数 を使う事が一般的
	const Test* pTest = &test;
	//pTest->SetValue( 10 ); // コンストメンバ関数でないため、変更される可能性があり使用できない
	pTest->GetValue();		// コンストメンバ関数なので、使用できる

	system( "pause" );
	return 0;
}
