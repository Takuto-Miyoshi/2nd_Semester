
#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include "../Definition.h"

class SceneManager{
public:
	SceneManager();
	~SceneManager();

	void Exec();	// シーンの実行
	void Draw();	// シーンの描画

	// 次のシーンを設定
	static void SetNextScene( SceneID next );

private:
	// 次のシーンを作成
	class SceneBase* CreateNextScene();

private:
	class SceneBase* pScene;		// 実行中のシーン
	static SceneID nextSceneID;		// 次に作るシーンのID
};

#endif // !SCENE_MANAGER_H
