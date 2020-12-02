
#include "DxLib.h"
#include "SceneBase.h"
#include "InGameScene.h"
#include "../Manager/SceneManager.h"

InGameScene::InGameScene(){

}

InGameScene::~InGameScene(){

}

void InGameScene::Exec(){
	// @@Dummy 遷移確認用の仮処理
	step++;
	if( step >= 120 )SceneManager::SetNextScene( SceneID::Result );
}

void InGameScene::Draw(){
	DrawString( 20, 20, "InGameScene", GetColor( 0, 0, 0 ) );
}

bool InGameScene::IsEnd() const{
	// @@Dummy 遷移確認用の仮処理
	return ( step >= 120 );
}

