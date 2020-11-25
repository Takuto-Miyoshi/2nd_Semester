
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/*
比較演算子のオペレーター

書き方
	戻り値の型
		operator ==(const 参照引数);

クラスのオペレーターとして用意する場合
	bool operator == ( const Vector2D& vec ) const;

	戻り値の型
		bool 比較結果は true, false になるため bool型になる

	引数
		const Employee& vmp		右辺のデータ型は const参照型

	呼び出し方の例
		Employee emp1;
		Employee emp2;

		vec1  == vec2;	// この時に「operator==」が呼び出される

注意点
	・メンバ変数のうち 何を 比較しているのかがわかるようなクラス構成にしておく
	今回のように post と sarary はどちらも比較対象になりうるため、 emp1 > emp2 としたときにどちらを比較しているのかわかりにくい
		・比較しうる変数を１つだけに絞る
		・コメントをつける( あんまりよくない )
		・個別の関数を用意する
*/

class Employee{
public:
	/// @brief 役職
	enum POST{
		STAFF,			// 平社員
		SECTION_CHIEF,	// 課長
		MANAGER,		// 部長
		PRESIDENT		// 社長
	};

	Employee( POST post_, int salary_ );

	void ShowPost();

	POST GetPost() const;

	// > をオーバーロード
	bool operator > ( const Employee& emp ) const;

private:
	/// @brief 役職
	POST post;

	/// @brief 給料
	int salary;
};

#endif // !EMPLOYEE_H
