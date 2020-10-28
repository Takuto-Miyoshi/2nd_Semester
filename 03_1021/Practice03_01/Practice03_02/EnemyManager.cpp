
#include "EnemyManager.h"
#include "Enemy.h"
#include "Base.h"

EnemyManager::EnemyManager() {
	m_Enemies.clear();
}

EnemyManager::~EnemyManager() {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		// newで確保した各Enemyクラスを削除
		delete *itr;
		*itr = nullptr;
	}
	// m_Enemiesにはnullptrが入ったBase*の配列が入っている
	m_Enemies.clear();
}

class Base* EnemyManager::CreateEnemy( int enemy_types ) {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		// 可変長配列に空きがあればそこに作る
		if ( *itr == nullptr ) {
			*itr = new Enemy();
			return *itr;
		}
	}

	// 空きがない場合は、新規に作って push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back( ptr );
	return ptr;
}

// エネミーを削除する
bool EnemyManager::DestroyEnemy( class Base* ptr ) {
	// ptrがnullptrだったら即リターン
	if ( ptr == nullptr ) {
		return false;
	}

	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		// 可変長配列にptrと同じアドレスを持つものがあれば削除
		Base* temp = *itr;
		if ( temp == ptr ) {
			delete temp;
			temp = nullptr;
			return true;
		}
	}

	return false;
}

// エネミーの処理を実行する
void EnemyManager::Exec() {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		if ( *itr != nullptr ) {
			Base* ptr = *itr;
			ptr->Exec();
		}
	}
}

// エネミーの描画を実行する
void EnemyManager::Draw() {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		if ( *itr != nullptr ) {
			Base* ptr = *itr;
			ptr->Draw();
		}
	}
}

class Base* EnemyManager::CheckHit( int x, int y, int width, int height ) {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		if ( *itr != nullptr ) {
			// 当たっていたらアドレスを返す
			Base* ptr = *itr;
			if ( ptr->CheckHit( x, y, width, height ) ) {
				return ptr;
			}
		}
	}
	
	return nullptr;
}