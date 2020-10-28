
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

// �G�l�~�[���폜����
bool EnemyManager::DestroyEnemy( class Base* ptr ) {
	// ptr��nullptr�������瑦���^�[��
	if ( ptr == nullptr ) {
		return false;
	}

	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		// �ϒ��z���ptr�Ɠ����A�h���X�������̂�����΍폜
		Base* temp = *itr;
		if ( temp == ptr ) {
			delete temp;
			temp = nullptr;
			return true;
		}
	}

	return false;
}

// �G�l�~�[�̏��������s����
void EnemyManager::Exec() {
	for ( std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr ) {
		if ( *itr != nullptr ) {
			Base* ptr = *itr;
			ptr->Exec();
		}
	}
}

// �G�l�~�[�̕`������s����
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
			// �������Ă�����A�h���X��Ԃ�
			Base* ptr = *itr;
			if ( ptr->CheckHit( x, y, width, height ) ) {
				return ptr;
			}
		}
	}
	
	return nullptr;
}