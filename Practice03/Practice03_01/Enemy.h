#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"	// 基底クラスのヘッダー(クラスの設計情報をインクルード)

//-----------------------------
//エネミークラス
//-----------------------------
// 継承その2 クラスの宣言部分に継承していることを表すコードを書く
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();
	virtual bool CheckHit(int x1, int y1, int width, int height);


private:
	// Enemy専用変数
	int m_Routine;	// 行動ルーチン管理変数
};

#endif // !ENEMY_H
