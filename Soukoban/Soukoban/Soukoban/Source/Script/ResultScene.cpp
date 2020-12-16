
#include "DxLib.h"
#include "SceneBase.h"
#include "ResultScene.h"
#include "../Manager/SceneManager.h"

ResultScene::ResultScene(){

}

ResultScene::~ResultScene(){

}

void ResultScene::Exec(){

}

void ResultScene::Draw(){
	DrawString( 20, 20, "ResultScene", GetColor( 0, 0, 0 ) );
}

bool ResultScene::IsEnd() const{

	return false;
}

void ResultScene::StartJingle(){

}

void ResultScene::Input(){

}

void ResultScene::ClearJingle(){

}
