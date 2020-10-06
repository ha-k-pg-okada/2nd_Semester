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

}

Fighter::~Fighter()
{

}

int main()
{



	system("pause");
	return 0;
}