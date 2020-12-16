
#ifndef IN_GAME_SCENE_H
#define IN_GAME_SCENE_H

class InGameScene : public SceneBase{
public:
	InGameScene();
	~InGameScene();

	void Exec();
	void Draw();

	bool IsEnd() const;

	void StartJingle();

	void Input();

	void ClearJingle();

private:
	int playerX;
	int playerY;
	enum ObjectType stageData[STAGE_HEIGHT][STAGE_WIDTH];
};

#endif IN_GAME_SCENE_H
