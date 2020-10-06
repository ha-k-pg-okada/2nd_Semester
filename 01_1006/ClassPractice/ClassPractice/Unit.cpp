#include "Unit.h"
#include "Common.h"


Unit::Unit()
{
	g_Status;
	g_Status._hp = 0;
	g_Status._str = 0;
	g_Status._mag = 0;
	g_Status._tec = 0;
	g_Status._spd = 0;
	g_Status._def = 0;
	g_Status._luc = 0;
	g_Status._mde = 0;
}


Unit::~Unit()
{

}

void Unit::PrintStatus()
{
	Unit g_Unit;

	printf("m_hp : %d\n", g_Unit.g_Status._hp);
	printf("m_str : %d\n", g_Unit.g_Status._str);
	printf("m_mag : %d\n", g_Unit.g_Status._mag);
	printf("m_tec : %d\n", g_Unit.g_Status._tec);
	printf("m_spd : %d\n", g_Unit.g_Status._spd);
	printf("m_def : %d\n", g_Unit.g_Status._def);
	printf("m_luc : %d\n", g_Unit.g_Status._luc);
	printf("m_mde : %d\n", g_Unit.g_Status._mde);



}