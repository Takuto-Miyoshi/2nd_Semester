
#ifndef CHARACTER_H
#define CHARACTER_H

/* ������Z�q�̃I�y���[�^�[
��������
	�߂�l�̌^ operator =(����);
���N���X�̃I�y���[�^�[�Ƃ��ėp�ӂ���ꍇ
	Character& operator = (Character &ch);
	�߂�l�̌^
		Character&		�N���X�̎Q�ƌ^
	����
		Character& ch	�E�ӂ̃f�[�^�^���Q�ƌ^
	�Ăяo�����̗�
		Character ch1;
		Character ch2;
		ch1 = ch2; // ���̎��Ɂuoperator=�v���Ăяo�����
*/

class Character
{
public:
	enum JOB
	{
		Freeter,	// ���E
		Warrior,	// ��m
		Wizard,		// ���@�g��
		Priest,		// �m��
	};

public:
	Character();
	Character( const Character& ch );
	virtual ~Character();

	// ������Z�q( = )��operator
	Character& operator = ( Character& ch );

	JOB GetJob() const{ return m_Job; }
private:
	JOB		m_Job;	// �E��
};

#ifdef PATTERN_02
// �֐��̈����֒l�n��������̂����Ȃ̂ŁA
// �A�h���X��n���悤�ɂ��đ΍������
// �p�����[�^��\�����邾��
void PrintParam( Character* ch );
#else
// �p�����[�^��\�����邾��
void PrintParam( Character ch );
#endif

#endif	// #ifndef CHARACTER_BASE_H
