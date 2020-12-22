
#ifndef IN_GAME_SCENE_H
#define IN_GAME_SCENE_H

#include "SceneBase.h"
#include "../Definition.h"

class InGameScene : public SceneBase{
public:
	InGameScene();
	virtual ~InGameScene();

	virtual void Exec();
	virtual void Draw();

	virtual bool IsEnd() const;

private:
	void StartJingle();

	void Input();

	void ClearJingle();

private:
	int stageData[STAGE_HEIGHT][STAGE_WIDTH];
	int playerX;
	int playerY;
};

#endif IN_GAME_SCENE_H
