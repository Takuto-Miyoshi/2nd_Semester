
#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"

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

private:
	int m_Routine;
};

#endif // #ifndef ENEMY_H
