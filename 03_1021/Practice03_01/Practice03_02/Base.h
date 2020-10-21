#ifndef BASE_H
#define BASE_H

// 基底クラス (親クラス、スーパークラス)
class Base {
public:
	Base ();
	virtual ~Base ();

public:
	// 引数の矩形情報と、自分が当たっているか判定
	// 関数宣言の前に virtual をつけると、それは仮想関数になる
	// 仮想関数は、派生先に同名の関数があった場合に、派生先の変数が優先される
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

	int m_width;	// 当たり判定用 幅
	int m_height;	// 当たり判定用 高さ
};

#endif // !BASE_H