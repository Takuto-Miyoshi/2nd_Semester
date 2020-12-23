
#include "InGameScene.h"
#include "DxLib.h"
#include "../Manager/SceneManager.h"
#include "../Manager/InputManager.h"

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

InGameScene::InGameScene():playerX( 0 ), playerY( 0 ){

	for( int y = 0; y < STAGE_HEIGHT; y++ ){
		for( int x = 0; x < STAGE_WIDTH; x++ ){
			stageData[y][x] = SampleStage[y][x];
			if( stageData[y][x] == ObjectType::Obj_Player ){
				playerX = x;
				playerY = y;
				stageData[y][x] = ObjectType::Obj_Ground;
			}
		}
	}
	step = Step_StartJingle;
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
	// ステージの中身と、プレイヤーを描画(DXライブラリのDrawBoxを使用)
// 	int DrawBox( int x1 , int y1 , int x2 , int y2 , unsigned int Color , int FillFlag );

// 23日までには完成させておく
	// m_StageDataの配列の中身をみて、それぞれの四角形を描画する
	//	ObjectType_Ground,			// 0 なし
	//	ObjectType_Wall,			// 1 白(255, 255, 255)
	//	ObjectType_Target,			// 3 赤(255,   0,   0)
	//	ObjectType_UnsetCrate,		// 4 紫(255,   0, 255)
	//	ObjectType_SetCrate = 7,	// 7 緑(  0, 255,   0)

	for( int y = 0; y < STAGE_HEIGHT; y++ ){
		for( int x = 0; x < STAGE_WIDTH; x++ ){
			int colorTemp = 0;
			switch( stageData[y][x] ){
			case ObjectType::Obj_Wall:		 colorTemp = GetColor( 255, 255, 255 ); break;
			case ObjectType::Obj_Target:	 colorTemp = GetColor( 255, 0, 0 ); break;
			case ObjectType::Obj_UnsetCrate: colorTemp = GetColor( 255, 0, 255 ); break;
			case ObjectType::Obj_SetCrate:	 colorTemp = GetColor( 0, 255, 0 ); break;
			default: break;
			}
			DrawBox( x * CHIP_WIDTH, y * CHIP_HEIGHT, x * CHIP_WIDTH + CHIP_WIDTH, y * CHIP_HEIGHT + CHIP_HEIGHT, colorTemp, true );
		}
	}

	// プレイヤーの描画

	//DrawString( 20, 20, "InGameScene", GetColor( 0, 0, 0 ) );
}

bool InGameScene::IsEnd() const{
	return ( step == Step_End );
}

void InGameScene::StartJingle(){
	step = Step_Input;
}

void InGameScene::Input(){

	InputManager* pInputMng = InputManager::GetInstance();

	if( pInputMng->IsPush( KeyType::Key_Reset ) )		Reset();
	else if( pInputMng->IsPush( KeyType::Key_Up ) )		Move( DirType::Dir_Up );
	else if( pInputMng->IsPush( KeyType::Key_Down ) )	Move( DirType::Dir_Down );
	else if( pInputMng->IsPush( KeyType::Key_Left ) )	Move( DirType::Dir_Left );
	else if( pInputMng->IsPush( KeyType::Key_Right ) )	Move( DirType::Dir_Right );

	if( IsClear() ){
		step = Step_ClearJingle;
	}
}

void InGameScene::ClearJingle(){
	step = Step_End;
	SceneManager::GetInstance()->SetNextScene( SceneID::ID_Result );
}

bool InGameScene::IsClear() const {
	for( int y = 0; y < STAGE_HEIGHT; y++ ){
		for( int x = 0; x < STAGE_WIDTH; x++ )
			if(stageData[y][x] == ObjectType::Obj_UnsetCrate ){
				return false;
		}
	}

	return true;
}

void InGameScene::Reset(){
	for( int y = 0; y < STAGE_HEIGHT; y++ ){
		for( int x = 0; x < STAGE_WIDTH; x++ ){
			stageData[y][x] = SampleStage[y][x];
			if( stageData[y][x] == ObjectType::Obj_Player ){
				playerX = x;
				playerY = y;
				stageData[y][x] = ObjectType::Obj_Ground;
			}
		}
	}
}

void InGameScene::Move( DirType dir ){
	if( dir < DirType::Dir_Up && dir >= DirType::Dir_Max ){
		return;
	}

	int nextX = playerX;
	int nextY = playerY;
	int next2X = playerX;
	int next2Y = playerY;

	switch( dir )
	{
	case Dir_Up:
		nextY -= 1;
		next2Y -= 2;
		break;
	case Dir_Down:
		nextY += 1;
		next2Y += 2;
		break;
	case Dir_Left:
		nextX -= 1;
		next2X -= 2;
		break;
	case Dir_Right:
		nextX += 1;
		next2X += 2;
		break;
	case Dir_Max:
		break;
	default:
		break;
	}
}
