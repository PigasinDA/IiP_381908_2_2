#pragma once
#include <iostream>
using namespace std;
//����� Cstring-------------------------------------------------
class Cstring
{
public:
	void outPut(const char* name);
	int GetSize()const;
	int GetLen()const;
	Cstring(void); // �� ���������
	Cstring(int S, char fill = '*'); // �������������
	Cstring(const char* string); // �������������� ����
	Cstring(const Cstring& string); // �����������
	~Cstring(); // ����������
	// ���������� ���������
	Cstring& operator= (const Cstring& string);
	Cstring operator+ (const Cstring& string);
	Cstring& operator+=(const Cstring& string);
	friend ostream& operator<<(ostream& stream, const Cstring& string);
	friend istream& operator >> (istream& stream, Cstring& string);
private:
	char* str; // ������
	int size; // ������ ������
	int len; // ����� ��������
};
ostream& operator<<(ostream& stream, const Cstring& string);
istream& operator >> (istream& stream, Cstring& string);
//����� Ccomplex-------------------------------------------------
class Ccomplex 
{
public:
	Ccomplex(); // ����������� �� ���������
	Ccomplex(const Ccomplex &c); // ����������� �����������
	Ccomplex(double _re, double _im);// ����������� �������������
	Ccomplex(double _re); // ����������� �������������� ����
	~Ccomplex(); // ����������
	void output();
	Ccomplex Add(Ccomplex a);
	Ccomplex Mlt(Ccomplex a);
	void InPut();
	void SetRe(double _re)
	{
		re = _re;
	}
	double GetRe()
	{
		return re;
	}
	void SetIm(double _im)
	{
		re = _im;
	}
	double GetIm()
	{
		return im;
	}
	Ccomplex& operator=(const Ccomplex& c);
	Ccomplex  operator+(const Ccomplex& c);
	Ccomplex operator*(const Ccomplex& c);
	friend Ccomplex operator*(double d, const Ccomplex& c);
	friend ostream& operator<<(ostream& stream, const Ccomplex& c);
	friend istream& operator >> (istream& stream, Ccomplex& c);
private:
	double re; // �������������� �����
	double im; // ������ �����
};
Ccomplex operator*(double d, const Ccomplex& c);
ostream& operator<<(ostream& stream, const Ccomplex& c);
istream& operator >> (istream& stream, Ccomplex& c);