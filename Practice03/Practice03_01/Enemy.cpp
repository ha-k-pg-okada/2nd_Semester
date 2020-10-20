#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// Enemy専用変数
	m_Routine = 0;

	printf("Enemyのコンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemyのデストラクタ\n");
}

void Enemy::Exec()
{

}
void Enemy::Draw()
{

}

bool  Enemy::CheckHit(int x1, int y1, int width, int height)
{
	

	printf("EnemyクラスのCheckHit()\n");

	Base::CheckHit(x1, y1, width, height);

	return false;
}

