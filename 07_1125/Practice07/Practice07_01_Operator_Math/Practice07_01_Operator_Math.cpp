
#include <iostream>

#include "Vector2D.h"

/*
算術演算子は + - * / % など
代入演算子を使用した += -= などもある
*/

int main()
{
	Vector2D vec1( 100, 100 );
	Vector2D vec2( 87, 14 );
	Vector2D ans;

	ans = vec1;
	ans += vec2;

	std::cout << "ans.x = " << ans.GetX() << std::endl;
	std::cout << "ans.y = " << ans.GetY() << std::endl;

	return 0;
}
