#ifndef UNIT_H_
#define UNIT_H_

class Unit {

public:
	Unit();
	~Unit();

	// ステータスの表示
	void PrintStatus();

private:
	int m_hp,  // 体力
		m_str, // 攻撃力
		m_mag, // 魔法力
		m_tec, // 技
		m_spd, // 敏捷性
		m_def, // 防御力
		m_luc, // 運
		m_mde; // 魔法防御力
};

#endif // UNIT_H_