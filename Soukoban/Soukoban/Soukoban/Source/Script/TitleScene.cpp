
#include "DxLib.h"
#include "SceneBase.h"
#include "TitleScene.h"
#include "../Manager/SceneManager.h"

TitleScene::TitleScene(){

}

TitleScene::~TitleScene(){

}

void TitleScene::Exec(){
	// @@Dummy 遷移確認用の仮処理
	step++;
	if( step >= 120 )SceneManager::SetNextScene( SceneID::InGame );
}

void TitleScene::Draw(){
	DrawString( 20, 20, "TitleScene", GetColor( 0, 0, 0 ) );
}

bool TitleScene::IsEnd() const{
	// @@Dummy 遷移確認用の仮処理
	return ( step >= 120 );
}

