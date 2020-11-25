
#include "Vector2D.h"

Vector2D::Vector2D() :x( 0.0f ), y( 0.0f ){

}

Vector2D::Vector2D( float x_, float y_ ) : x( x_ ), y( y_ ){

}

Vector2D& Vector2D::operator = ( const Vector2D& vec ){

	this->x = vec.x;
	this->y = vec.y;
	return *this;
}

// 左辺値へ計算して代入を行うので基本的には代入演算子と同じ型になる
Vector2D& Vector2D::operator += ( const Vector2D& vec ){

	this->x += vec.x;
	this->y += vec.y;
	return *this;
}

Vector2D Vector2D::operator + ( const Vector2D& vec ){

	Vector2D ans;
	ans.x = this->x + vec.x;
	ans.y = this->y + vec.y;
	return ans;
}
