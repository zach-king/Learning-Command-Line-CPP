#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int m_nMonth, m_nDay, m_nYear;

public:
    Date(int nMonth, int nDay, int nYear);
    void SetDate(int nMonth, int nDay, int nYear);
    int GetMonth();
    int GetDay();
    int GetYear();
};

#endif
