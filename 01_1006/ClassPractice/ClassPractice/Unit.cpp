#include "Unit.h"
#include "Common.h"


Unit::Unit()
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


Unit::~Unit()
{

}

void Unit::PrintStatus()
{
	Unit g_Unit;

	printf("m_hp : %d\n", g_Unit.m_hp);
	printf("m_str : %d\n", g_Unit.m_str);
	printf("m_mag : %d\n", g_Unit.m_mag);
	printf("m_tec : %d\n", g_Unit.m_tec);
	printf("m_spd : %d\n", g_Unit.m_spd);
	printf("m_def : %d\n", g_Unit.m_def);
	printf("m_luc : %d\n", g_Unit.m_luc);
	printf("m_mde : %d\n", g_Unit.m_mde);



}