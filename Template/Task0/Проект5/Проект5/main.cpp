#include <iostream>
#include <fstream>
#include "Fun.h"
using namespace std;
int main()
{
	int tab = 1;
	while (tab == 1)
	{
		setlocale(LC_ALL, "RUSSIAN");
		int menu = 0;
		cout << "1.�������� ������ Ccomplex." << endl;
		cout << "2.�������� ������ Cstring." << endl;
		cout << "������� ����� ������:";
		cin >> menu;
		switch (menu)
		{
			case 1:
			{
				Ccomplex num1;
				Ccomplex num2;
				Ccomplex res1;
				Ccomplex res2;
				Ccomplex num3;
				Ccomplex num4;
				Ccomplex res3;
				Ccomplex res4;
				num1.InPut();
				cout << "������� ��� ������� �����.";
				cout << endl;
				num2.InPut();
				num3 = num1;
				num4 = num2;
				res1 = num1.Add(num2);
				res2 = num1.Mlt(num2);
				cout << "��������� ��������:";
				res1.output();
				cout << "       //����� �����//����� ����� �����";
				cout << endl;
				cout << "��������� ���������:";
				res2.output();
				cout << "       //����� �����//����� ����� �����";
				cout << endl;
				res3 = num3 + num4;
				res4 = num3 *num4;
				cout << "��������� ��������:";
				cout << res3;
				cout << "       //����� ��������//����� ����� ��������";
				cout << endl;
				cout << "��������� ���������:";
				cout << res4;
				cout << "       //����� ��������//����� ����� ��������";
				cout << endl;
				break;
			}
			case 2:
			{
				Cstring s1;
				Cstring s3(10, '*');
				Cstring s4(15);
				Cstring s2("����� ");
				Cstring s5(s2);
				s3.outPut("s3");
				s4.outPut("s4");
				s2.outPut("s2");
				s5.outPut("s5");
				s3 = s2;
				s3.outPut("s3");
				s2 = "����������";
				s2.outPut("s2");
				s5 = s3 + s2;
				s5.outPut("s5");
				s3 += s2;
				s3 = "��������";
				s3 += " - ������  ��� ��������";
				s3.outPut("s3");
				// ������ � �����
				s1 = "������ ";
				s2 = "�������";
				ofstream os; // ����� ��� ������
				os.open("str.txt"); // ���� ��� ������
				os << s1 << s2 << endl;
				os.close();
				// ������ �� ������
				ifstream is; // ����� ��� ������
				is.open("str.txt"); // ���� ��� ������
				is >> s3 >> s4;
				cout << "s3: " << s3;
				cout << "s4: " << s4;
				is.close();
				break;
			}
		}
		cout << "���� ������ ��������� ��������� ������ ������� '1'...";
		cin >> tab;
	} 
	cout << endl;
	system("pause");
	return 0;
}