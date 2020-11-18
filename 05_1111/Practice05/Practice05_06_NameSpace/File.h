#ifndef FILE_H
#define FILE_H

// namespace 名前空間の書き方(入れ子)
/*
namespace namespaceの名前１{
	namespace namespaceの名前２{
		// グローバル変数やクラス定義など
	}
}
*/

// ファイル
namespace File{
	//テクスチャ
	namespace Texture{
		static const int Max = 100;
	}

	// サウンド
	namespace Sound{
		static const int Max = 20;
	}

	static const int Max = Texture::Max + Sound::Max;
}

#endif FILE_H
