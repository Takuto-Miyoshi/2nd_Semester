
#ifndef KEY_DEFINITION
#define KEY_DEFINITION

#include "DxLib.h"

enum KeyType
{
	Up,		// 上移動
	Down,	// 下移動
	Left,	// 左移動
	Right,	// 右移動
	Enter,	// 決定
	Reset,	// リセット

	Max		// キーの種類の数
};

const int KEY_ASSIGN[KeyType::Max] = {
	KEY_INPUT_UP,		// KeyType	Up
	KEY_INPUT_DOWN,		//			Down
	KEY_INPUT_LEFT,		//			Left
	KEY_INPUT_RIGHT,	//			Right
	KEY_INPUT_RETURN,	//			Enter
	KEY_INPUT_R			//			Reset
};

#endif // !KEY_DEFINITION
