#include <iostream>
#include "CharacterBase.h"

// �R�s�[�R���X�g���N�^�̒�`
// �N���X��::�R���X�g���N�^(const �N���X��& ������){
// }
CharacterBase::CharacterBase( const CharacterBase& cb ){
	std::cout << "CharacterBase::�R�s�[�R���X�g���N�^" << std::endl;
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}

// �f�t�H���g�̈����t���R���X�g���N�^
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
	// �ϐ�copy���L���Ȃ̂� CreateCopy�܂łȂ̂ŌĂяo�������Ŏg�����߂�
	// �߂�l�ϐ��Ƃ���������̂ɒl����( �߂�l = copy )���Ă��邽�߁A�R�s�[�R���X�g���N�^���Ăяo�����
	CharacterBase copy( m_Hp, m_Mp );
	return copy;
}
