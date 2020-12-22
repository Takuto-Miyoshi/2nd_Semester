
#ifndef DEFINITION_H
#define DEFINITION_H

// シーンID
enum SceneID{
	id_Title,		// タイトル
	id_InGame,		// インゲーム
	id_Result,		// リザルト

	id_Max,
	id_Invalid		// 無効値
};

// ステージのサイズ
const int STAGE_WIDTH = 11;
const int STAGE_HEIGHT = 13;

// マップチップのサイズ
const int CHIP_WIDTH = 32;
const int CHIP_HEIGHT = 32;

enum ObjectType{
	Ground,			// 地面
	Wall,			// 壁
	Player,			// プレイヤーの初期地点
	Target,			// クレート配置場所
	UnsetCrate,		// 未配置のクレート
	SetCrate = 7	// 設置済みのクレート(設置場所 + 未配置クレート = 7)
};

#endif // !DEFINITION_H
