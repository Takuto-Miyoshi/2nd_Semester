
#include "Character.h"
#include <stdio.h>
#include <string.h>

Character::Character()
	: m_Job( Freeter )
{
	printf( "�ʏ�̃R���X�g���N�^\n" );
}

Character::Character( const Character& ch )
	: m_Job( ch.GetJob() )
{
	printf( "�R�s�[�R���X�g���N�^\n" );
}

Character::~Character()
{
}

// �I�y���[�^�[�̒�`����
Character& Character::operator =( Character& ch )
{
	printf( "������Z�q�̃I�[�o�[���[�h\n" );
	m_Job = ch.GetJob();

	/* this(this�|�C���^)
		�I�y���[�^�[�̍��Ӓl�̃f�[�^�͂��̊֐����Ăяo���Ă���N���X�̃C���X�^���X�ł���
		���́A�N���X�̃����o�֐��ɂ́Athis�Ƃ����A
		�֐����Ăяo�����C���X�^���X���g���w����p�̃|�C���^�ϐ����B��đ��݂��Ă���B
	*/
	return *this;
}
