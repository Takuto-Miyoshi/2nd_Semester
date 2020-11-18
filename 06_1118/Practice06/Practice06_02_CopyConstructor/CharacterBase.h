
#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H

/* コピーコンストラクタ
コピーコンストラクタとは
インスタンスの代入などを行った際に実行される特殊なコンストラクタ
主にインスタンス情報を別のインスタンスにコピーする

呼び出されるケース
　インスタンスへの代入 ( = 代入演算子 )
  関数に値渡しをする
  インスタンスを戻り値に使う時

重要な注意点
　クラスのメンバ変数に、動的に確保するインスタンスがある場合
  コピーコンストラクタで正しく対策をとらないと
　メモリアクセス違反などのバグが発生してしまう

  解決策
	１、動的に確保しない(メモリが無駄になるが、配列で確保しておく)
	２、関数で渡す際に、値渡しでなくポインタ渡しなどにする
	３、コピーコンストラクタで正しい対策をとる
*/

class CharacterBase
{
public:
	// コピーコンストラクタの書き方
	// クラス名(const クラス名& 引数名)
	CharacterBase( const CharacterBase& cb );

	// デフォルトの引数付きコンストラクタ
	CharacterBase( int hp, int mp );
	virtual ~CharacterBase();

	void SetHp( int hp ){ m_Hp = hp; }
	void SetMp( int mp ){ m_Mp = mp; }

	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	// パラメータ表示
	void PrintParam();

	// ダメージを与える
	// 値渡しによるコピーコンストラクタ呼び出しテスト
	void ReceiveDamage( CharacterBase attacker );

	// 自身を複製を作る
	// インスタンスを戻り値に使う時のコピーコンストラクタ呼び出しテスト
	CharacterBase CreateCopy();

protected:
	int m_Hp;
	int m_Mp;
};

#endif	// #ifndef CHARACTER_BASE_H
