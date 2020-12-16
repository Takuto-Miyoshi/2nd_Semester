
#include "DxLib.h"
#include "../Definition.h"
#include "SceneBase.h"
#include "InGameScene.h"
#include "../Manager/SceneManager.h"
#include "../Manager/InputManager.h"
#include "../Manager/GameManager.h"

enum{
	Step_StartJingle,
	Step_Input,
	Step_ClearJingle,
	Step_End
};

const int SampleStage[STAGE_HEIGHT][STAGE_WIDTH] = {
	0,0,0,1,1,1,1,1,0,0,0,
	0,0,0,1,3,3,3,1,0,0,0,
	0,0,0,1,0,0,0,1,0,0,0,
	0,0,0,1,0,0,0,1,0,0,0,
	1,1,1,1,1,0,1,1,1,1,1,
	1,0,0,4,0,0,1,0,0,0,1,
	1,0,1,0,0,4,0,4,0,0,1,
	1,0,0,0,1,1,1,0,0,0,1,
	1,1,1,0,1,0,1,0,1,1,1,
	0,0,1,0,1,0,1,0,1,0,0,
	0,0,1,0,0,0,0,0,1,0,0,
	0,0,1,0,0,2,0,0,1,0,0,
	0,0,1,1,1,0,1,1,1,0,0,
};

InGameScene::InGameScene()
	:playerX( 0 ), playerY( 0 ){

	for( int y = 0; y < STAGE_HEIGHT; y++ ){
		for( int x = 0; x < STAGE_WIDTH; x++ ){
			switch( SampleStage[y][x] )
			{
			case 0: stageData[y][x] = ObjectType::Ground; break;
			case 1: stageData[y][x] = ObjectType::Wall; break;
			case 2: stageData[y][x] = ObjectType::Ground; break;
				playerX = x;
				playerY = y;
				break;
			case 3: stageData[y][x] = ObjectType::Target; break;
			case 4: stageData[y][x] = ObjectType::UnsetCrate; break;
			case 7: stageData[y][x] = ObjectType::SetCrate; break;
			default: break;
			}
		}
	}
}

InGameScene::~InGameScene(){

}

void InGameScene::Exec(){
	switch( step )
	{
	case Step_StartJingle: StartJingle(); break;
	case Step_Input:		Input(); break;
	case Step_ClearJingle:	ClearJingle(); break;
	default:	break;
	}
}

void InGameScene::Draw(){
	DrawString( 20, 20, "InGameScene", GetColor( 0, 0, 0 ) );
}

bool InGameScene::IsEnd() const{
	return false;
}

void InGameScene::StartJingle(){
	step = Step_Input;
}

void InGameScene::Input(){
	InputManager* pInputMng = InputManager::GetInstance();
	if( pInputMng->IsPush( KeyType::Enter ) ){
		step = Step_ClearJingle;
	}
}

void InGameScene::ClearJingle(){
	step = Step_End;
	SceneManager::GetInstance()->SetNextScene( SceneID::Result );
}
