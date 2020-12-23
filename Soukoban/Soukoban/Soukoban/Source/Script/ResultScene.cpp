
#include "ResultScene.h"
#include "DxLib.h"
#include "../Manager/SceneManager.h"
#include "../Manager/InputManager.h"

enum{
	Step_Input,
	Step_End
};

ResultScene::ResultScene(){
	step = Step_Input;
}

ResultScene::~ResultScene(){

}

void ResultScene::Exec(){
	switch( step )
	{
	case Step_Input: Input(); break;
	default:	break;
	}
}

void ResultScene::Draw(){
	DrawString( 20, 20, "ResultScene", GetColor( 0, 0, 0 ) );
}

bool ResultScene::IsEnd() const{

	return ( step == Step_End );
}

void ResultScene::Input(){
	if( InputManager::GetInstance()->IsPush( KeyType::Key_Enter ) ){
		step = Step_End;
		SceneManager::GetInstance()->SetNextScene( SceneID::ID_Title );
	}
}
