#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// Enemy��p�ϐ�
	m_Routine = 0;

	printf("Enemy�̃R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy�̃f�X�g���N�^\n");
}

void Enemy::Exec()
{
	printf("Enemy��Exec\n");
}
void Enemy::Draw()
{
	printf("Enemy��Draw\n");
}

bool  Enemy::CheckHit(int x1, int y1, int width, int height)
{
	

	printf("Enemy�N���X��CheckHit()\n");

	Base::CheckHit(x1, y1, width, height);

	return false;
}

