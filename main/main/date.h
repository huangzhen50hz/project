#ifndef __DATEH__
#define __DATEH__

#include <string>

class Date
{
public:
	Date(int year = 0, int month = 1, int date = 1);
	Date(Date &date);
	~Date();

	Date &operator=(const Date &date);

protected:
	int m_year;
	int m_month;
	int m_date;
};

#endif