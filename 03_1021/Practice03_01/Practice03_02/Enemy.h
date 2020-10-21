
#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"
#include <stdio.h>

//------------------------------
// �G�l�~�[�N���X
//------------------------------
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

	// �����̋�`���ƁA�������������Ă��邩����
	bool CheckHit ( int x, int y, int width, int height );

private:
	int m_Routine;
};

#endif // #ifndef ENEMY_H
