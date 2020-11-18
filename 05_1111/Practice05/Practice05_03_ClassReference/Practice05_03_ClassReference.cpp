
#include <iostream>
#include "CharacterBase.h"
#include "Enemy00.h"

void PrintParam( const CharacterBase& character );

int main()
{
	CharacterBase* pEnemy = new Enemy00;
	PrintParam( *pEnemy );

	system( "pause" );
	return 0;
}

void PrintParam( const CharacterBase& character ){
	printf( "Character Parameter List\n" );
	printf( "------------------------\n" );
	printf( "Hp = %3d\n", character.GetHp() );
	printf( "Mp = %3d\n", character.GetMp() );
}
