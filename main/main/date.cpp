#include "date.h"

Date::Date(int year, int month, int date)
{
	m_year = year;
	m_month = month;
	m_date = date;
}

Date::Date(Date &date)
{
	m_year = date.m_year;
	m_month = date.m_month;
	m_date = date.m_date;
}

Date &Date::operator=(const Date& date)
{
	m_year = date.m_year;
	m_month = date.m_month;
	m_date = date.m_date;
	return *this;
}

Date::~Date()
{
}