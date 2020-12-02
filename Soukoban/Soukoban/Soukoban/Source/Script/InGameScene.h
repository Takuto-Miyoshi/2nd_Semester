
#ifndef IN_GAME_SCENE_H
#define IN_GAME_SCENE_H

class InGameScene : public SceneBase{
public:
	InGameScene();
	~InGameScene();

	void Exec();
	void Draw();

	bool IsEnd() const;

};

#endif IN_GAME_SCENE_H
