
#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"

//------------------------------
// プレイヤークラス
//------------------------------

// 基底クラスを継承する
// 派生クラス名 : (public or private) 基底クラス
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();
};

#endif // #ifndef PLAYER_H
