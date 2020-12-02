
#ifndef RESULT_SCENE_H
#define RESULT_SCENE_H

class ResultScene : public SceneBase{
public:
	ResultScene();
	~ResultScene();

	void Exec();
	void Draw();

	bool IsEnd() const;

};

#endif RESULT_SCENE_H
