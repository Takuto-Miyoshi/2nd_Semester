
#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H

#include "Definition.h"

class CharacterBase
{
public:
	CharacterBase();
	virtual ~CharacterBase();

	void SetHp( int hp ){ m_Hp = hp; }
	void SetMp( int mp ){ m_Mp = mp; }

	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	EnemyType GetEnemyType() { return m_Type; }

protected:
	int m_Hp;
	int m_Mp;
	EnemyType m_Type;
};

#endif	// #ifndef CHARACTER_BASE_H
