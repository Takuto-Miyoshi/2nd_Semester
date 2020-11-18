
#ifndef ENEMY01_H
#define ENEMY01_H

#include "CharacterBase.h"

class Enemy01 : public CharacterBase
{
public:
	Enemy01();
	~Enemy01();

	void SetVariation( int variation ){ m_Variation = variation; }
	void SetRoutine( int routine ){ m_Routine = routine; }

private:
	int m_Variation;
	int m_Routine;
};

#endif	// #ifndef ENEMY01_H
