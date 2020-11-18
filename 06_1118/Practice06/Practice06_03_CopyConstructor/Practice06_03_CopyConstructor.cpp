
#include <iostream>
#include "Character.h"

int main()
{
	// スコープを作成して character の寿命を明確にする
	{
		Character character( "山田太郎", 50, 10 );

#ifdef PATTERN_02
		PrintParam( &character );
		PrintParam( &character );
#else
		PrintParam( character );
		PrintParam( character );
#endif
	}

	return 0;
}
