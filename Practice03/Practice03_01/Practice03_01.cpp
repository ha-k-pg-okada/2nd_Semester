
#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Enemy.h"
#include "EnemyManager.h"


void printHp(Base* target)
{
    if (target == nullptr)
    {
        return;
    }


    printf("hp = %d\n", target->GetHp());
}

int main()
{
   // 
   // //基底クラスのポインタ変数へ、継続先のクラスのアドレスを代入できる
   ///* Base* player = new Player();
   // Base* enemy = new Enemy();*/

   // //どちらもBaseクラスを継承しているので、
   // //Baseのポインタ変数配列で管理することができる
   // Base* array[] =
   // {
   //     new Player(),
   //     new Enemy()

   // };
   // array[1]->SetHp(100);


   ///* player->SetMoveSpeed(5.0f);
   // enemy->SetHp(100);*/

   // //arrayを使って当たり判定をfor文でまわす
   // for (int i = 0; i < 2; i++)
   // {
   //     if (array[i] != nullptr)
   //     {
   //         array[i]->Exec();

   //         printHp(array[i]);
   //         if (array[i] ->CheckHit(10,10,20,30) == false)
   //         {
   //             printf("当たってないンゴ\n");
   //         }
   //     }
   // }

   ///* delete player;
   // delete enemy;*/

   // for (int i = 0; i < 2; i++)
   // {
   //     delete array[i];
   //     array[i] = nullptr;

   // }

   // //純粋仮想関数を宣言したクラスは
   // //単体で実体化させることができなくなる
   //// Base base;
   // //Base* pBase = new Base();
   
    EnemyManager* enemymng = new EnemyManager();
    Base* pEnemy = nullptr;

    //ステージ開始時にまとめて初期化
    enemymng->CreateEnemy(0);
    enemymng->CreateEnemy(1);
    enemymng->CreateEnemy(2);
    pEnemy = enemymng->CreateEnemy(3);
    enemymng->CreateEnemy(4);
    enemymng->CreateEnemy(4);
    enemymng->CreateEnemy(4);

    //作成したEnemyに各処理を行わせる
    enemymng->Exec();
    enemymng->Draw();

    //指定したEnemyを削除
    enemymng->DestoryEnemy(pEnemy);

    //指定座標と接触しているEnemyを取得
    pEnemy = enemymng->CheckHit(10, 10, 20, 30);

    system("pause");
    return 0;
}
