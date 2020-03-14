#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class LongLong
{
private:
	int cel;
	unsigned int ost;
public:
	LongLong();//����������� �� ���������
	LongLong(const LongLong &c);//����������� �����������
	LongLong(int _cel,unsigned int _ost);//����������� �������������
	LongLong(int _ost);//����������� �������������� ����
	~LongLong();//����������
	LongLong& operator+=(const LongLong& c);
	LongLong& operator=(const LongLong& c);
	LongLong  operator-(const LongLong& c);
	LongLong  operator*(const LongLong& c);
	LongLong  operator+(const LongLong& c);
	bool operator == (const LongLong& c);
	friend ostream& operator << (ostream& stream, const LongLong& c);
	friend istream& operator >> (istream& stream, LongLong& c);
};
ostream& operator << (ostream& stream,const LongLong& c);
istream& operator >> (istream& stream,LongLong& c);
