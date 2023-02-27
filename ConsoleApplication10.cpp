#include <iostream>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;
class DATA
{
    int day;
    int month;
    int year;
public:
	DATA(int newday, int newmonth, int newyear) :
		day{ newday },
		month{ newmonth },
		year{ newyear } {}
	int getday() { return day; }
	int setday(int newday) { day = newday; }
	int getmonth() { return month; }
	int setday(int newmonth) { month = newmonth; }
	int getyear() { return year; }
	int setday(int newyear) { year = newyear; }

	void printDR() { cout << day << month << year; }
};

class Chel
{
    int num;
    char* fam;
    char* name;
    char* otch;
	DATA dr;
public:
	Chel(int newNum, const char* newFam, const char* newName, const  char* newOtch, DATA dr) :
		num{ newNum }, fam{ newFam ? new char[strlen(newFam) + 1] : nullptr }, name{ newName ? new char[strlen(newName) + 1] : nullptr }, otch{ newOtch ? new char[strlen(newOtch) + 1] : nullptr }, dr{ dr.day,dr.month,dr.year }
	{
		if (fam)
		{
			strcpy_s(fam, strlen(newFam) + 1, newFam);
		}
		if (name)
		{
			strcpy_s(name, strlen(newName) + 1, newName);
		}
		if (otch)
		{
			strcpy_s(otch, strlen(newOtch) + 1, newOtch);
		}
	}
	Chel() : Chel(12, "Surname", "name", "Patronymic", {13, "Fabruary", 222}) {}
	Chel(const Chel& cop) : num{ cop.num }, fam{ cop.fam ? new char[strlen(cop.fam) + 1] : nullptr } , 
		name{ cop.name ? new char[strlen(cop.name) + 1] : nullptr } , otch{ cop.otch ? new char[strlen(cop.otch) + 1] : nullptr }, dr{ cop.dr.day,cop.dr.month,cop.dr.year } 
	{
		if (fam)
		{
			strcpy_s(fam, strlen(cop.fam) + 1, cop.fam);
		}
		if (name)
		{
			strcpy_s(name, strlen(cop.name) + 1, cop.name);
		}
		if (otch)
		{
			strcpy_s(otch, strlen(cop.otch) + 1, cop.otch);
		}
	}
	int getN() { return num; }
	void setN(int newNum) { num = newNum; }
	char* getF() { return fam; }
	void setF(char* newFam) { fam = newFam; }
	char* getNm() { return name; }
	void setF(char* newName) { name = newName; }
	char* getOtch() { return otch; }
	void setF(char* newOtch) { otch = newOtch; }
	~Chel()
	{}
	void print()
	{
		cout << "Номер:" << num << '\n' << "Фамилия:" << fam << '\n' << "Имя:" << name << '\n' << "Отчество" << otch << '\n' << "Дата рождения";
		void printDR();
	}
};
int main()
{
	Chel chelovek;
	
}

