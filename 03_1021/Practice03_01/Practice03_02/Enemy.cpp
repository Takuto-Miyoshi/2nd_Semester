
#include "Enemy.h"

Enemy::Enemy () {
	m_Routine = 0;
}

Enemy::~Enemy (){

}

void Enemy::Exec (){

}

void Enemy::Draw (){

}

// �����̋�`���ƁA�������������Ă��邩����
bool Enemy::CheckHit ( int x, int y, int width, int height ) {
	//���ɓ�����Ȃ��������Ƃɂ���
	printf ( "Enemy : ������܂���ł���\n" );
	return false;
}