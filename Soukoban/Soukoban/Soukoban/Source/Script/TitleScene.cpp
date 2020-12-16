
#include "DxLib.h"
#include "SceneBase.h"
#include "TitleScene.h"
#include "../Manager/SceneManager.h"
#include "../Manager/InputManager.h"
#include "../Manager/GameManager.h"

enum{
	Step_LogoIn,
	Step_Input,
	Step_End
};

TitleScene::TitleScene(){
	step = Step_LogoIn;
}

TitleScene::~TitleScene(){

}

void TitleScene::Exec(){
	switch( step )
	{
	case Step_LogoIn: LogoIn(); break;
	case Step_Input: Input(); break;
	default:break;
	}
}

void TitleScene::Draw(){
	DrawString( 20, 20, "TitleScene", GetColor( 0, 0, 0 ) );
}

bool TitleScene::IsEnd() const{
	return ( step == Step_End );
}

void TitleScene::LogoIn(){
	step = Step_Input;
}

void TitleScene::Input(){
	InputManager* pInputMng = InputManager::GetInstance();

	if( pInputMng->IsPush( KeyType::Enter ) ){
		step = Step_End;
		SceneManager::GetInstance()->SetNextScene( SceneID::InGame );
	}
}

