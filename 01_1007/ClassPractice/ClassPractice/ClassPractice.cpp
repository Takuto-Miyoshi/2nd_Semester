#include <stdlib.h>
#include <stdio.h>

class Fighter {

public:
	Fighter();
	~Fighter();

public:
	int m_hp,  // 体力
		m_str, // 攻撃力
		m_mag, // 魔法力
		m_tec, // 技
		m_spd, // 敏捷性
		m_def, // 防御力
		m_luc, // 運
		m_mde; // 魔法防御力
};

Fighter::Fighter() {
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;
}

Fighter::~Fighter() {

}

int main() {

	Fighter fighter;

	printf(" HP :%3d \n", fighter.m_hp);
	printf("STR :%3d \n", fighter.m_str);
	printf("MAG :%3d \n", fighter.m_mag);
	printf("TEC :%3d \n", fighter.m_tec);
	printf("SPD :%3d \n", fighter.m_spd);
	printf("DEF :%3d \n", fighter.m_def);
	printf("LUC :%3d \n", fighter.m_luc);
	printf("MDE :%3d \n", fighter.m_mde);

	system("pause");
	return 0;
}