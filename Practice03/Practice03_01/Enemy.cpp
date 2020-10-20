#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// Enemyê—p•Ï”
	m_Routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{

}
void Enemy::Draw()
{

}

bool  Enemy::CheckHit(int x1, int y1, int width, int height)
{
	

	printf("EnemyƒNƒ‰ƒX‚ÌCheckHit()\n");

	Base::CheckHit(x1, y1, width, height);

	return false;
}

