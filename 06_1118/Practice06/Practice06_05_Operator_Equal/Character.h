
#ifndef CHARACTER_H
#define CHARACTER_H

/* 代入演算子のオペレーター
■書き方
	戻り値の型 operator =(引数);
■クラスのオペレーターとして用意する場合
	Character& operator = (Character &ch);
	戻り値の型
		Character&		クラスの参照型
	引数
		Character& ch	右辺のデータ型も参照型
	呼び出し方の例
		Character ch1;
		Character ch2;
		ch1 = ch2; // この時に「operator=」が呼び出される
*/

class Character
{
public:
	enum JOB
	{
		Freeter,	// 無職
		Warrior,	// 戦士
		Wizard,		// 魔法使い
		Priest,		// 僧侶
	};

public:
	Character();
	Character( const Character& ch );
	virtual ~Character();

	// 代入演算子( = )のoperator
	Character& operator = ( Character& ch );

	JOB GetJob() const{ return m_Job; }
private:
	JOB		m_Job;	// 職業
};

#ifdef PATTERN_02
// 関数の引数へ値渡しをするのが問題なので、
// アドレスを渡すようにして対策をする
// パラメータを表示するだけ
void PrintParam( Character* ch );
#else
// パラメータを表示するだけ
void PrintParam( Character ch );
#endif

#endif	// #ifndef CHARACTER_BASE_H
