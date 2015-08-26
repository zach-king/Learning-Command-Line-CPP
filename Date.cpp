#include "Date.h"

// Date constructor
Date::Date(int nMonth, int nDay, int nYear)
{
    SetDate(nMonth, nDay, nYear);
}

// Date member function
void Date::SetDate(int nMonth, int nDay, int nYear)
{
    m_nMonth = nMonth;
    m_nDay = nDay;
    m_nYear = nYear;
}

// Accessor method
int Date::GetMonth() { return m_nMonth; }
int Date::GetDay() { return m_nDay; }
int Date::GetYear() { return m_nYear; }
