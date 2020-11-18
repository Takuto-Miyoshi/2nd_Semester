#include "CharacterBase.h"

CharacterBase::CharacterBase()
	: m_Hp( 10 )
	, m_Mp( 8 )
	, m_Type( EnemyType_Invalid )
{
}

CharacterBase::~CharacterBase()
{
}
