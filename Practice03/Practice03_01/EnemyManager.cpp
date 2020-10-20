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
//m_Enemies�ɂ�nullptr��������Base*�̔z�񂪓����Ă���
	m_Enemies.clear();

}

//Enemy�𐶂ݏo��
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
	//�󂫂��Ȃ��̂ŁA�V�K�ɍ����push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);

	return ptr;

}

//Enemy���폜
bool EnemyManager::DestoryEnemy(class Base* ptr)
{
	if (ptr == nullptr)
	{
		return false;
	}

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{

		//�ϒ��z���ptr�Ɠ����A�h���X�������̂�����΍폜
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

//Enemy�̏������s
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

//Enemy�̕`��
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

//�w�肵����`��Enemy�̓����蔻��
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
