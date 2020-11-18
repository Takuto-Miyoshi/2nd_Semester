#include <iostream>
#include "CharacterBase.h"

// コピーコンストラクタの定義
// クラス名::コンストラクタ(const クラス名& 引数名){
// }
CharacterBase::CharacterBase( const CharacterBase& cb ){
	std::cout << "CharacterBase::コピーコンストラクタ" << std::endl;
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}

// デフォルトの引数付きコンストラクタ
CharacterBase::CharacterBase( int hp, int mp ) : m_Hp( 10 ), m_Mp( 8 ){

}

CharacterBase::~CharacterBase(){

}

void CharacterBase::PrintParam(){
	std::cout << "Hp = " << m_Hp << std::endl;
	std::cout << "Mp = " << m_Mp << std::endl;
}

void CharacterBase::ReceiveDamage( CharacterBase attacker ){
	std::cout << "--ReceiveDamage--" << std::endl;
	m_Hp -= attacker.m_Mp;
}

CharacterBase CharacterBase::CreateCopy(){
	// 変数copyが有効なのは CreateCopyまでなので呼び出した側で使うために
	// 戻り値変数ともいえるものに値を代入( 戻り値 = copy )しているため、コピーコンストラクタが呼び出される
	CharacterBase copy( m_Hp, m_Mp );
	return copy;
}
