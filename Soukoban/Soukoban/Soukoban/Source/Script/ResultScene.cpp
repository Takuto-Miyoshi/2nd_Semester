
#include "DxLib.h"
#include "SceneBase.h"
#include "ResultScene.h"
#include "../Manager/SceneManager.h"

ResultScene::ResultScene(){

}

ResultScene::~ResultScene(){

}

void ResultScene::Exec(){
	// @@Dummy 遷移確認用の仮処理
	step++;
	if( step >= 120 )SceneManager::SetNextScene( SceneID::Title );
}

void ResultScene::Draw(){
	DrawString( 20, 20, "ResultScene", GetColor( 0, 0, 0 ) );
}

bool ResultScene::IsEnd() const{
	// @@Dummy 遷移確認用の仮処理
	return ( step >= 120 );
}

