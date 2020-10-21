#ifndef BASE_H
#define BASE_H

// 基底クラス (親クラス、スーパークラス)
class Base {
public:
	Base ();
	virtual ~Base ();

public:
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
};

#endif // !BASE_H