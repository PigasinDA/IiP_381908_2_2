#include"Fun.h"
using namespace std;
LongLong::LongLong()// ����������� �� ���������
{
	cel = 0; ost = 0;
}
LongLong::LongLong(const LongLong &c)// ����������� �����������
{
	ost = c.ost; cel = c.cel;
}
LongLong::LongLong(int _cel, unsigned int _ost)// ����������� �������������
{
	cel = _cel; ost = _ost;
}
LongLong::LongLong(int _ost)// ����������� �������������� ����
{
	ost = _ost;
}
LongLong::~LongLong()// ����������
{
	cel = 0; ost = 0;
}
bool LongLong::operator == (const LongLong& c)
{
	if (ost == c.ost && cel == c.cel)
	{
		return true;
	}
	else
	{
		return false;
	}
}
