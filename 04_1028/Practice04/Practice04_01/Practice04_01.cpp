
#include <iostream>

#include "Test.h"

int main()
{
    Test testA;
    Test testB;

    testA.SetValue( 230 );
    testA.SetStaticValue( 8320 );
    testB.SetValue( 230222222 );
    // staticメンバ関数は以下のように書くこともできる
    // Testクラスに於いて、SetStaticValueは１つだけなので、testA.Set~~() ではなく Test::Set~~()でOK
    // Test::SetStaticValue() と書くほうが、静的であるとわかりやすい
    Test::SetStaticValue( 1000 );

    testA.PrintValue();
    testB.PrintValue();
    
    // staticメンバ関数・変数の使い方一例(実体の数を数える)
    // 使用用途:メモリの解放確認
    Test::PrintCount();

    {
        Test testC;
        Test::PrintCount();
    }
    Test::PrintCount();

    system( "pause" );
    return 0;
}
