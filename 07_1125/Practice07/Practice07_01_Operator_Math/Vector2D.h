
#ifndef VECTOR_2D_H
#define VECTOR_2D_H

/*
算術演算子 + - * / % のオペレーター
書き方
	戻り値の型 operator +(const 参照引数)

クラスのオペレーターとして用意する場合
	Vector2D operator +(const Vector2D &vec);

	戻り値の型
		Vector2D			クラスの値渡し

	引数
		const Vector2D& vec	右辺のデータ型はconst参照型

	呼び出し方の例
		Vector2D vec1;
		Vector2D vec2;

		vec1 + vec2; この時に operator+ が呼び出される

用意するメリット
	・クラス内の全メンバ変数に対して、同じ計算をする場合にコーディングを短縮できる
	・直感的に使うことができる
	通常ならば AddPos などの関数を用意することが必要になる

注意点
	・Vector2Dの x, y に対して個別に値を加算、取得したい場合は通常通りに AddPosX, GetPosX などの関数を用意する必要がある
	operator + だけでは X に足すのか Y に足すのか判断できないため
*/

class Vector2D{
public:
	Vector2D();
	Vector2D( float x_, float y_ );

	float GetX() const { return x; }
	float GetY() const { return y; }

	// = のオーバーロード
	Vector2D& operator = ( const Vector2D& vec );

	// += のオーバーロード
	Vector2D& operator += ( const Vector2D& vec );

	// + のオペレーターオーバーロード
	Vector2D operator + ( const Vector2D& vec );

private:
	float x;
	float y;
};

#endif // !VECTOR_2D_H
