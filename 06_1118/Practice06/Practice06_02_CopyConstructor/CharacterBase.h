
#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H

/* �R�s�[�R���X�g���N�^
�R�s�[�R���X�g���N�^�Ƃ�
�C���X�^���X�̑���Ȃǂ��s�����ۂɎ��s��������ȃR���X�g���N�^
��ɃC���X�^���X����ʂ̃C���X�^���X�ɃR�s�[����

�Ăяo�����P�[�X
�@�C���X�^���X�ւ̑�� ( = ������Z�q )
  �֐��ɒl�n��������
  �C���X�^���X��߂�l�Ɏg����

�d�v�Ȓ��ӓ_
�@�N���X�̃����o�ϐ��ɁA���I�Ɋm�ۂ���C���X�^���X������ꍇ
  �R�s�[�R���X�g���N�^�Ő������΍���Ƃ�Ȃ���
�@�������A�N�Z�X�ᔽ�Ȃǂ̃o�O���������Ă��܂�

  ������
	�P�A���I�Ɋm�ۂ��Ȃ�(�����������ʂɂȂ邪�A�z��Ŋm�ۂ��Ă���)
	�Q�A�֐��œn���ۂɁA�l�n���łȂ��|�C���^�n���Ȃǂɂ���
	�R�A�R�s�[�R���X�g���N�^�Ő������΍���Ƃ�
*/

class CharacterBase
{
public:
	// �R�s�[�R���X�g���N�^�̏�����
	// �N���X��(const �N���X��& ������)
	CharacterBase( const CharacterBase& cb );

	// �f�t�H���g�̈����t���R���X�g���N�^
	CharacterBase( int hp, int mp );
	virtual ~CharacterBase();

	void SetHp( int hp ){ m_Hp = hp; }
	void SetMp( int mp ){ m_Mp = mp; }

	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	// �p�����[�^�\��
	void PrintParam();

	// �_���[�W��^����
	// �l�n���ɂ��R�s�[�R���X�g���N�^�Ăяo���e�X�g
	void ReceiveDamage( CharacterBase attacker );

	// ���g�𕡐������
	// �C���X�^���X��߂�l�Ɏg�����̃R�s�[�R���X�g���N�^�Ăяo���e�X�g
	CharacterBase CreateCopy();

protected:
	int m_Hp;
	int m_Mp;
};

#endif	// #ifndef CHARACTER_BASE_H
