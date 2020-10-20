#ifndef ENEMEY_MANAGER_H
#define ENEMEY_MANAGER_H

#include <vector>


//Enemy�Ǘ��N���X
class EnemyManager
{
public:
	EnemyManager();  //�R���X�g���N�^
	~EnemyManager(); //�f�X�g���N�^




public:

	//Enemy�𐶂ݏo��
	class Base* CreateEnemy(int enemy_type);

	//Enemy���폜
	bool DestoryEnemy(class Base* ptr);

	//Enemy�̏������s
	void Exec();

	//Enemy�̕`��
	void Draw();

	//�w�肵����`��Enemy�̓����蔻��
	class Base* CheckHit(int x1, int y1, int width, int height);
	


private:

	//�쐬����Enemy���Ǘ�����
	std::vector<class Base*> m_Enemies;


};



#endif // !ENEMEY_MANAGER_H

