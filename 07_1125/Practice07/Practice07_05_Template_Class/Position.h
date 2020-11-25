#ifndef POSITION_H
#define POSITION_H

/*
テンプレートクラス

概要
	クラスのメンバに対してテンプレートを使ったクラス

書き方
	Template <class T>
	class クラス名{
		T メンバ変数;

		T 関数名{
	
		}
	};

	クラス外に定義を書く場合
		template <typename パラメータ名>
		戻り値の型 クラス名<パラメータ名>::関数名(引数){
		
		}

補足
	・テンプレートを使ったクラスのことを汎用クラスと呼んだりする
	・typenameとclassについてはその機能に違いはない
	そのテンプレートを使う時の T の型が class である可能性があるなら class
	int や float などのデータ型である場合は typename を使うルールにすることで
	コードの可読性を上げることができる...かも
*/

template <class T>
class Position{
public:
	Position() :posX( 0 ), posY( 0 ){

	}

public:
	void SetPosX( T x ){ posX = x; }
	void SetPosY( T y ){ posY = y; }

	T GetPosX( T x )const{ return x; }
	T GetPosY( T y )const{ return y; }

	// オーバーロード
	T operator + ( const Position& pos );

	T operator = ( const Position& pos );

private:
	T posX;
	T posY;
};

// テンプレートクラスの関数定義
// + オーバーロード
template <class T>
T Position<T>::operator + ( const Position& pos ){
	// 上で<T>型用のPositionであると宣言しているので、ここでは宣言不要
	Position ans;
	ans.SetPosX( this->GetPosX() + pos.GetPosX );
	ans.SetPosY( this->GetPosY() + pos.GetPosY );
	return ans;
}

template<class T>
T Position<T>::operator = ( const Position& pos ){
	this.SetPosX( pos.GetPosX() );
	this.SetPosY( pos.GetPosY() );
	return this*;
}

#endif // !POSITION_H
