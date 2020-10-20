#include "EnemyManager.h"
#include "Base.h"
#include "Enemy.h"



EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

EnemyManager::~EnemyManager()
{
	
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();itr != m_Enemies.end();++itr)
	{
		Base* ptr = *itr;
		delete* itr;
		ptr = nullptr;
	}
//m_Enemiesにはnullptrが入ったBase*の配列が入っている
	m_Enemies.clear();

}

//Enemyを生み出す
class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr == nullptr)
		{
			ptr = new Enemy();
			return ptr;

		}
	
	}
	//空きがないので、新規に作ってpush_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);

	return ptr;

}

//Enemyを削除
bool EnemyManager::DestoryEnemy(class Base* ptr)
{
	if (ptr == nullptr)
	{
		return false;
	}

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{

		//可変長配列にptrと同じアドレスを持つものがあれば削除
		Base* tmp = *itr;
		if (tmp == nullptr)
		{
			delete tmp;
			tmp = nullptr;
			return true;
		}

	}
	return false;
}

//Enemyの処理実行
void EnemyManager::Exec()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr != nullptr)
		{
			ptr->Exec();
		}

	}
}

//Enemyの描画
void EnemyManager::Draw()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr != nullptr)
		{
			ptr->Draw();
		}

	}
}

//指定した矩形とEnemyの当たり判定
class Base* EnemyManager::CheckHit(int x1, int y1, int width, int height)
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr != nullptr)
		{
			if (ptr->CheckHit(x1, y1, width, height))
			{
				return ptr;
			}
		}

	}
	return nullptr;
}
