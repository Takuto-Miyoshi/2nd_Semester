
#include "EnemyManager.h"
#include "Enemy.h"
#include "Base.h"

EnemyManager::EnemyManager() {
	m_Enemies.clear();
}

EnemyManager::~EnemyManager() {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		// new�Ŋm�ۂ����eEnemy�N���X���폜
		delete *itr;
		*itr = nullptr;
	}
	// m_Enemies�ɂ�nullptr��������Base*�̔z�񂪓����Ă���
	m_Enemies.clear();
}

class Base* EnemyManager::CreateEnemy( int enemy_types ) {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		// �ϒ��z��ɋ󂫂�����΂����ɍ��
		if ( *itr == nullptr ) {
			*itr = new Enemy();
			return *itr;
		}
	}

	// �󂫂��Ȃ��ꍇ�́A�V�K�ɍ���� push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back( ptr );
	return ptr;
}