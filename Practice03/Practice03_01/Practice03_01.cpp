
#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Enemy.h"

int main()
{

    //基底クラスのポインタ変数へ、継続先のクラスのアドレスを代入できる
    Base* player = new Player();
    Base* enemy = new Enemy();

    player->SetMoveSpeed(5.0f);
    enemy->SetHp(100);

 
    if (player->CheckHit(10,10,20,30) == false)
    {
        printf("当たってへんよ～\n");
    }
    if (enemy->CheckHit(10,10,20,30) == false)
    {
        printf("当たってへんよ～\n");
    }

    delete player;
    delete enemy;



    system("pause");
    return 0;
}
