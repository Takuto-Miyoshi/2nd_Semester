#include "Common.h"
#include "Unit.h"
#include "Definition.h"

Status status;

Unit::Unit() {
	status._hp = 0;
	status._str = 0;
	status._mag = 0;
	status._tec = 0;
	status._spd = 0;
	status._def = 0;
	status._luc = 0;
	status._mde = 0;
}

Unit::~Unit() {

}

void Unit::PrintStatus() {
	printf(" HP :%3d \n", status._hp);
	printf("STR :%3d \n", status._str);
	printf("MAG :%3d \n", status._mag);
	printf("TEC :%3d \n", status._tec);
	printf("SPD :%3d \n", status._spd);
	printf("DEF :%3d \n", status._def);
	printf("LUC :%3d \n", status._luc);
	printf("MDE :%3d \n", status._mde);
}