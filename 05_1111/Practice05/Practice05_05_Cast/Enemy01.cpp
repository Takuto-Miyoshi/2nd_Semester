
#include "Enemy01.h"

Enemy01::Enemy01()
	: m_Variation( 0 )
	, m_Routine( 0 )
{
	m_Hp = 3;
	m_Type = EnemyType_Zako01;
}

Enemy01::~Enemy01()
{
}
