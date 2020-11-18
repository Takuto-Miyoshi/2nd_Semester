
#include <iostream>
#include "CharacterBase.h"

int main()
{
	CharacterBase player( 10, 8 );
	CharacterBase enemy = player;	// コピーコンストラクタ呼び出し

	// 引数 attacker = player と同義になるためコピーコンストラクタが呼び出される
	enemy.ReceiveDamage( player );

	player.PrintParam();
	enemy.PrintParam();

	CharacterBase dummy = enemy.CreateCopy();
	printf( "\n" );
	enemy.CreateCopy();

	return 0;
}
