
#include <iostream>
#include "Enemy.h"
#include "Shot.h"
#include "File.h"

// using について
// usingはnamespaceをスコープ内に追加する機能
// 書き方
// using namespace namespace名;
using namespace Enemy;

/* using注意点
usingはnamespaceの所属情報を指定しなくていいので便利だが、
名前の衝突問題が再燃してしまうので使用しすぎない。

なお、usingはヘッダーファイルでは使わないようにする
includeしたcppすべてにusingの影響が出てしまうため、namespaceを使用している意味がなくなってしまう
*/


int main()
{
	// namespaceに属しているデータを使うときの書き方(namespaceの外)
	// namespace::所属しているデータ
	//printf( "敵の最大数 = %d\n", Enemy::Max );
	//printf( "弾の最大数 = %d\n", Shot::Max );
	Enemy::PrintMax();
	Shot::PrintMax();

	// stdも名前空間
	std::cout << "std も名前空間" << std::endl;

	// 入れ子にしたnamespace内のデータを使う場合
	printf( "テクスチャの最大数 = %d\n", File::Texture::Max );
	printf( "サウンドの最大数 = %d\n", File::Sound::Max );
	printf( "ファイルの最大数 = %d\n", File::Max );

	// usingでEnemy名前空間を使うことにしているので
	// 以下は Enemy::PrintMax()を呼び出している
	PrintMax();

	system( "pause" );
	return 0;
}
