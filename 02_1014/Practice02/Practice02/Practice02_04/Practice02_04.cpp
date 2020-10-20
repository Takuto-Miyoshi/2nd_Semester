
#include <stdio.h>
#include <stdlib.h>

#include "Enemy.h"
#include "Player.h"

int main()
{
	Player player;
	player.SetMoveSpeed(5.0f);

	Enemy enemy;
	enemy.SetHp(100);

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	printf("Player Status\n");
	printf("hp = %d\n", player.GetHp());
	printf("PosX = %0.2f\n", player.GetPosX());
	printf("PosY = %0.2f\n", player.GetPosY());
	printf("MoveSpeed = %0.2f\n", player.GetMoveSpeed());
	printf("\n");

	printf("Enemy Status\n");
	printf("hp = %d\n", enemy.GetHp());
	printf("PosX = %0.2f\n", enemy.GetPosX());
	printf("PosY = %0.2f\n", enemy.GetPosY());
	printf("MoveSpeed = %0.2f\n", enemy.GetMoveSpeed());
	printf("\n");

	system("pause");
	return 0;
}