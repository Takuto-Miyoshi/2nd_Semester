
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

// ˆø”‚Ì‹éŒ`î•ñ‚ÆA©•ª‚ª“–‚½‚Á‚Ä‚¢‚é‚©”»’è
bool Enemy::CheckHit ( int x, int y, int width, int height ) {
	//‰¼‚É“–‚½‚ç‚È‚©‚Á‚½‚±‚Æ‚É‚·‚é
	printf ( "Enemy : “–‚½‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n" );
	return false;
}