#include "Common.h"
#include "Unit.h"

Unit::Unit() {
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;
}

Unit::~Unit() {

}

void Unit::PrintStatus() {
	printf(" HP :%3d \n", m_hp);
	printf("STR :%3d \n", m_str);
	printf("MAG :%3d \n", m_mag);
	printf("TEC :%3d \n", m_tec);
	printf("SPD :%3d \n", m_spd);
	printf("DEF :%3d \n", m_def);
	printf("LUC :%3d \n", m_luc);
	printf("MDE :%3d \n", m_mde);
}