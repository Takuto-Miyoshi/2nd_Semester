
#include "Enemy.h"

Enemy::Enemy () {
	m_Routine = 0;

	printf( "Enemy : constructor\n" );
}

Enemy::~Enemy (){
	printf( "Enemy : destructor\n" );
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