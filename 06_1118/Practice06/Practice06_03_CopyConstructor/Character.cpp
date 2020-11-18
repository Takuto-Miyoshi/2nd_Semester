#include "Character.h"
#include <iostream>

// デフォルトの引数付きコンストラクタ
Character::Character( const char* name, int hp, int mp ) 
#ifdef PATTERN_01
	: m_Hp( hp ), m_Mp( mp )
#else
	: m_pName( nullptr ), m_Hp( hp ), m_Mp( mp )
#endif
{
#ifdef PATTERN_01
	strcpy_s( m_pName, 32, name );
#else
	m_pName = new char[32];
	strcpy_s( m_pName, 32, name );
#endif
	printf( "コンストラクタ\n" );
}

#ifdef PATTERN_03
Character::Character( const Character& ch ){
	std::cout << "コピーコンストラクタ" << std::endl;
}
#endif

Character::~Character(){
#ifdef PATTERN_01
	delete[] m_pName;
#endif
	printf( "デストラクタ\n" );
}

#ifdef PATTERN_02
// パラメータを表示するだけ
void PrintParam( Character* ch ){
	printf( "名前：%s\n", ch->GetName() );
	printf( "HP　：%d\n", ch->GetHp() );
	printf( "MP　：%d\n", ch->GetHp() );
}
#else
void PrintParam( Character ch ){
	printf( "名前：%s\n", ch.GetName() );
	printf( "HP　：%d\n", ch.GetHp() );
	printf( "MP　：%d\n", ch.GetHp() );
}
#endif
