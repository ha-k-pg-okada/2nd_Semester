#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"	// 基底クラスのヘッダー(クラスの設計情報をインクルード)

//-----------------------------
//プライヤークラス
//-----------------------------
// 継承その2 クラスの宣言部分に継承していることを表すコードを書く
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();
};

#endif // !PLAYER_H
