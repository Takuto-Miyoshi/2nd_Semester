
#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "../Singleton.h"

class GameManager : public Singleton<GameManager>{
public:
	GameManager();
	~GameManager();

	// シーン間でやりとりしたいデータの設定、取得関数を適宜追加

private:
	// シーン間でやりとりするデータを保持しておく変数を適宜追加
};

#endif // !GAME_MANAGER_H
