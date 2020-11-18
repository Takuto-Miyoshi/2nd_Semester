
#include <iostream>
#include "CharacterBase.h"
#include "Enemy00.h"
#include "Enemy01.h"


// const_castテスト用のグローバル変数
const int giConst = 200;

int main()
{
	// static_cast(暗黙の型変換が存在る型同士の変換を、明示的に行う方法)
	// static_cast<変化する型名>( 変換元の値(変数) )
	double PI = 3.1415926535;
	int iPI1 = PI;	// 暗黙的変換で、エラー出ないが、warning C4244が出る
	int iPI2 = static_cast< int >( PI );	// C++的キャストの書き方
	int iPI3 = int( PI );				// C++的キャストの書き方
	int iPI4 = ( int ) PI;					// C言語的キャストの書き方

	// dynamic_cast
	// (基底クラスから、派生クラスへダウンキャストする際に、型を厳密にチェックする方法)
	// dynamic_cast<変化する型名>( 変換元の値(変数) )
	Enemy01 enemy01;
	CharacterBase* pBase = &enemy01;	// 基底のポインタ変数へ、派生のアドレス代入
//	Enemy00* pEnemy00    = pBase;		// 派生のポインタ変数へ、基底のアドレスを代入(error!!)
	Enemy00* pEnemy00 = dynamic_cast< Enemy00* >( pBase );
	Enemy01* pEnemy01 = dynamic_cast< Enemy01* >( pBase );

	// reinterpret_cast
	// (ポインタ型を別のポインタ型へ強制変換する)
	int j = 0;
	//	char* c = &j;	// これは型が違うのでエラー
	char* c = reinterpret_cast< char* >( &j );	// int* を char* へ強制変換
	c[0] = 1;
	c[1] = 1;
	std::cout << "j : " << j << std::endl;

	// 危険なキャスト(enemy00のアドレスはEnemy01のアドレスではない)
	Enemy00 enemy00;
	pEnemy01 = reinterpret_cast< Enemy01* >( &enemy00 );
	//	pEnemy01->SetVariation( 10 );	// Enemy00にないメモリ領域にアクセスしてしまう！
	//	pEnemy01->SetRoutine( 5 );

		// 基底クラスに、派生クラスが何であるか判別するための変数などを用意して使用する
	switch ( pBase->GetEnemyType() )
	{
	case EnemyType_Zako00:
		pEnemy00 = reinterpret_cast< Enemy00* >( pBase );
		break;
	case EnemyType_Zako01:
		pEnemy01 = reinterpret_cast< Enemy01* >( pBase );
		pEnemy01->SetVariation( 1 );
		pEnemy01->SetRoutine( 10 );
		break;
	default:
		break;
	}

	// const_cast(普段使わない、constを明示的に外すタイミングはさほどない)
	const int iConst = 100;
	//	iConst = 200;				// constなので代入はできない
	//	int* pNonConst = &iConst;	// constでないポインタ変数へアドレスを渡すこともできない
	int* pNonConst = const_cast< int* >( &iConst );

	// constを外したので代入できるようになる(動作はする)
	*pNonConst = 200;
	std::cout << "iConst : " << iConst << std::endl;

	//	pNonConst = const_cast<int*>(&giConst);
	//	*pNonConst = 400;	// グローバル変数の場合例外がスローされる

		// MSDocによると、constを外した領域へのアクセスは未定義
		// https://docs.microsoft.com/ja-jp/cpp/cpp/const-cast-operator?view=msvc-160

	return 0;
}
