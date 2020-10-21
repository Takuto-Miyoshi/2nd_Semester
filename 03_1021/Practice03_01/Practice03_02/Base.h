#ifndef BASE_H
#define BASE_H

// ���N���X (�e�N���X�A�X�[�p�[�N���X)
class Base {
public:
	Base ();
	// ���N���X�̃f�X�g���N�^�ɂ͕K��virtual�����邱��
	virtual ~Base ();

public:
	// �p����ŁA���ꂼ�ꏈ���̈Ⴄ���Ƃ��킩���Ă���֐���
	// �������z�֐��Ƃ��Ċ��N���X�ɐ錾
	// �������z�֐����P�ȏ㑶�݂���N���X�� ���ۃN���X �ƂȂ�A�p�����Ȃ��Ǝg���Ȃ��Ȃ� = �P�̂Ŏ��̉��ł��Ȃ�
	virtual void Exec() = 0;
	virtual void Draw() = 0;

	// �����̋�`���ƁA�������������Ă��邩����
	// �֐��錾�̑O�� virtual ������ƁA����͉��z�֐��ɂȂ�
	// ���z�֐��́A�h����ɓ����̊֐����������ꍇ�ɁA�h����̕ϐ����D�悳���
	virtual bool CheckHit ( int x, int y, int width, int height );

	void SetHp ( int hp );
	void SetPos ( float x, float y );
	void SetMoveSpeed ( float speed );

	int GetHp ();
	float GetPosX ();
	float GetPosY ();
	float GetMoveSpeed ();

private:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;

	int m_width;	// �����蔻��p ��
	int m_height;	// �����蔻��p ����
};

#endif // !BASE_H