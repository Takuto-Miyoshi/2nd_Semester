﻿
#ifndef TITLE_SCENE_H
#define TITLE_SCENE_H

class TitleScene : public SceneBase{
public:
	TitleScene();
	~TitleScene();

	void Exec();
	void Draw();

	bool IsEnd() const;

};

#endif TITLE_SCENE_H