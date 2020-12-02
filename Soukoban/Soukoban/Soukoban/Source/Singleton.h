
#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton{
	//------------
	// クラスの実際の処理


	//------------
	// シングルトンデザイン
private:
	Singleton(){}			// コンストラクタ抑制
	virtual ~Singleton(){}	// デストラクタ抑制

private:
	// 自分自身のポインタ変数(自分自身の唯一の実態)
	static Singleton* pInstance;

public:
	// 実態を作る関数
	static void CreateInstance(){
		// 既に作られているなら新しく作らないことを保証する
		if( pInstance == nullptr )pInstance = new Singleton();
	}

	static void DestroyInstance(){
		delete pInstance;
		pInstance = nullptr;
	}

	static Singleton* GetInstance(){
		return pInstance;
	}

	static bool IsNull(){
		return ( pInstance == nullptr );
	}
};

#endif // !SINGLETON_H

