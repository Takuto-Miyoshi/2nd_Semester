#ifndef ENEMY_MANAGER_H
#define ENEMY_MANAGER_H

#include <vector>

// エネミー管理クラス
class EnemyManager {
public:
	EnemyManager();
	// virtual をつける = 継承してもいい
	// virtual をつけない = 継承してほしくない
	~EnemyManager();

public:
	// エネミーを生み出す
	class Base* CreateEnemy( int enemy_type );
	// エネミーを削除する
	bool DestroyEnemy( class Base* ptr );
	// エネミーの処理を実行する
	void Exec();
	// エネミーの描画を実行する
	void Draw();
	// 指定した矩形とEnemyの当たり判定をとる
	class Base* CheckHit( int x, int y, int width, int height );

private:
	// 作成したエネミーを管理する
	std::vector<class Base*> m_Enemies;
};

#endif // !ENEMY_MANAGER_H