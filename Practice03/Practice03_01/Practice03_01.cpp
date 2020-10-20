
#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Enemy.h"

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

    //基底クラスのポインタ変数へ、継続先のクラスのアドレスを代入できる
   /* Base* player = new Player();
    Base* enemy = new Enemy();*/

    //どちらもBaseクラスを継承しているので、
    //Baseのポインタ変数配列で管理することができる
    Base* array[] =
    {
        new Player(),
        new Enemy()

    };
    array[1]->SetHp(100);


   /* player->SetMoveSpeed(5.0f);
    enemy->SetHp(100);*/

    //arrayを使って当たり判定をfor文でまわす
    for (int i = 0; i < 2; i++)
    {
        if (array[i] != nullptr)
        {
            array[i]->Exec();

            printHp(array[i]);
            if (array[i] ->CheckHit(10,10,20,30) == false)
            {
                printf("当たってないンゴ\n");
            }
        }
    }

   /* delete player;
    delete enemy;*/

    for (int i = 0; i < 2; i++)
    {
        delete array[i];
        array[i] = nullptr;

    }

    //純粋仮想関数を宣言したクラスは
    //単体で実体化させることができなくなる
   // Base base;
    //Base* pBase = new Base();

    system("pause");
    return 0;
}
