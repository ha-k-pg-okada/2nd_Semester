#ifndef ENEMEY_MANAGER_H
#define ENEMEY_MANAGER_H

#include <vector>


//Enemy管理クラス
class EnemyManager
{
public:
	EnemyManager();  //コンストラクタ
	~EnemyManager(); //デストラクタ




public:

	//Enemyを生み出す
	class Base* CreateEnemy(int enemy_type);

	//Enemyを削除
	bool DestoryEnemy(class Base* ptr);

	//Enemyの処理実行
	void Exec();

	//Enemyの描画
	void Draw();

	//指定した矩形とEnemyの当たり判定
	class Base* CheckHit(int x1, int y1, int width, int height);
	


private:

	//作成したEnemyを管理する
	std::vector<class Base*> m_Enemies;


};



#endif // !ENEMEY_MANAGER_H

