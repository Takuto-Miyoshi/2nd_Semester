
#include "SceneManager.h"
#include "../Script/SceneBase.h"
#include "../Script/TitleScene.h"
#include "../Script/InGameScene.h"
#include "../Script/ResultScene.h"

SceneID SceneManager::nextSceneID = SceneID::Invalid;

SceneManager::SceneManager() :pScene( nullptr ){
	SetNextScene( SceneID::Title );
	pScene = CreateNextScene();
}

SceneManager::~SceneManager(){
	delete pScene;
	pScene = nullptr;
}

void SceneManager::Exec(){
	if( pScene == nullptr )return;

	pScene->Exec();
	if( pScene->IsEnd() ){
		delete pScene;
		pScene = CreateNextScene();
	}
}

void SceneManager::Draw(){
	if( pScene == nullptr )return;

	pScene->Draw();
}

void SceneManager::SetNextScene( SceneID next ){
	nextSceneID = next;
}

SceneBase* SceneManager::CreateNextScene(){
	SceneBase* next = nullptr;
	switch( nextSceneID )
	{
	case SceneID::Title:	next = new TitleScene();	break;
	case SceneID::InGame:	next = new InGameScene();	break;
	case SceneID::Result:	next = new ResultScene();	break;
	default:		break;
	}

	return next;
}
