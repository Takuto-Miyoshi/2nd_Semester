#include "Common.h"
#include "Unit.h"

int main() {

	Unit unit;

	printf(" HP :%3d \n", unit.m_hp);
	printf("STR :%3d \n", unit.m_str);
	printf("MAG :%3d \n", unit.m_mag);
	printf("TEC :%3d \n", unit.m_tec);
	printf("SPD :%3d \n", unit.m_spd);
	printf("DEF :%3d \n", unit.m_def);
	printf("LUC :%3d \n", unit.m_luc);
	printf("MDE :%3d \n", unit.m_mde);

	system("pause");
	return 0;
}