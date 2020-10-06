#include <stdlib.h>
#include <stdio.h>

class Fighter
{
public:

	//コンストラクタ
	Fighter();

	//デストラクタ
	~Fighter();

public:

	int m_hp = 0;
	int m_str = 0;
	int m_mag = 0;
	int m_tec = 0;
	int m_spd = 0;
	int m_def = 0;
	int m_luc = 0;
	int m_mde = 0;
	


};



Fighter::Fighter()
{
	 m_hp = 0;
	 m_str = 0;
	 m_mag = 0;
	 m_tec = 0;
	 m_spd = 0;
	 m_def = 0;
	 m_luc = 0;
	 m_mde = 0;
}

Fighter::~Fighter()
{

}

int main()
{
	Fighter g_Fighter;

	printf("m_hp = %d\n",g_Fighter.m_hp);
	printf("m_str = %d\n", g_Fighter.m_str);
	printf("m_mag = %d\n", g_Fighter.m_mag);
	printf("m_tec = %d\n", g_Fighter.m_tec);
	printf("m_spd = %d\n", g_Fighter.m_spd);
	printf("m_def = %d\n", g_Fighter.m_def);
	printf("m_luc = %d\n", g_Fighter.m_luc);
	printf("m_mde = %d\n", g_Fighter.m_mde);




	system("pause");
	return 0;
}