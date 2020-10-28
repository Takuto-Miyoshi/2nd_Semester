
#include <iostream>

class CharaBase {
public:
    CharaBase();
    CharaBase(int hp_, int mp_);
    virtual ~CharaBase();

    void PrintParam();

private:
    int hp;
    int mp;

    const int HP_MAX;
};

// コンストラクタで、メンバ イニシャライザによる初期化方法
// クラス名::コンストラクタ(引数) : メンバ変数(初期化), メンバ変数(初期化)

// コンストラクタ呼び出し -> メンバイニシャライザ -> コンストラクタ実行 の順に処理される
// メンバイニシャライザの方が処理の最適化につながる

// メンバイニシャライザは宣言した順に呼び出される
CharaBase::CharaBase()
    : hp( 50 ), mp( 10 ), HP_MAX( 999 )/* constメンバ変数もここで初期化できる */ {

    // 従来の初期化方法
    //hp = 50;
    //mp = 10;
}

CharaBase::CharaBase( int hp_, int mp_ )
    : hp( hp_ ), mp( mp_ ), HP_MAX( 999 ) {

    // hp = hp_;
    // mp = mp_;
}

CharaBase::~CharaBase() {

}

void CharaBase::PrintParam() {
    printf( "HP = %d\n", hp);
    printf( "MP = %d\n", mp);
    printf( "\n");
    printf( "HP MAX = %d\n", HP_MAX);
}

class Player : public CharaBase {
public:
    Player();

private:
    int money;
};

// 引数なしの基底クラスのコンストラクタは省略することができる
// 派生クラスのメンバイニシャライザは基底クラスのコンストラクタを先に呼び出す
Player::Player()
    : CharaBase(200, 30), money(50){

}

int main()
{
    // データ型にもコンストラクタは存在する
    int i_value( 10 );
    float f_value( 10.0f );

    CharaBase ch;
    ch.PrintParam();

    system( "pause" );
    return 0;
}
