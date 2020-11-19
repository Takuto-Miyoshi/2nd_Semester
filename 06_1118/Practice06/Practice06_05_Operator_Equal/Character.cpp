
#include "Character.h"
#include <stdio.h>
#include <string.h>

Character::Character()
	: m_Job( Freeter )
{
	printf( "通常のコンストラクタ\n" );
}

Character::Character( const Character& ch )
	: m_Job( ch.GetJob() )
{
	printf( "コピーコンストラクタ\n" );
}

Character::~Character()
{
}

// オペレーターの定義部分
Character& Character::operator =( Character& ch )
{
	printf( "代入演算子のオーバーロード\n" );
	m_Job = ch.GetJob();

	/* this(thisポインタ)
		オペレーターの左辺値のデータはこの関数を呼び出しているクラスのインスタンスである
		実は、クラスのメンバ関数には、thisという、
		関数を呼び出したインスタンス自身を指す専用のポインタ変数が隠れて存在している。
	*/
	return *this;
}
