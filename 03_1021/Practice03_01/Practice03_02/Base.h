#ifndef BASE_H
#define BASE_H

// ���N���X (�e�N���X�A�X�[�p�[�N���X)
class Base {
public:
	Base ();
	virtual ~Base ();

public:
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