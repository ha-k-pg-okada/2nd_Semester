#include "Definition.h"

#ifndef UNIT_H
#define UNIT_H



class Unit
{
public:

	

	//コンストラクタ
	Unit();

	//デストラクタ
	~Unit();

	void PrintStatus();

private:

	Status g_Status;

	/*int m_hp = 0;
	int m_str = 0;
	int m_mag = 0;
	int m_tec = 0;
	int m_spd = 0;
	int m_def = 0;
	int m_luc = 0;
	int m_mde = 0;*/



};




#endif // !UNIT_H
