#include "NumberWithUnits.hpp"
#include <map>
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

namespace ariel
{
    NumberWithUnits operator+(const NumberWithUnits &n)
    {
        return n;
    }
    NumberWithUnits operator-(const NumberWithUnits &n)
    {
        return n;
    }
    NumberWithUnits &operator+=(NumberWithUnits &a, const NumberWithUnits &b)
    {
       return a;
    }
    NumberWithUnits &operator-=(NumberWithUnits &a, const NumberWithUnits &b)
    {
        return a;
    }
    const NumberWithUnits operator+(const NumberWithUnits &a, const NumberWithUnits &b)
    {
       return a;
    }
    const NumberWithUnits operator-(const NumberWithUnits &a, const NumberWithUnits &b)
    {
        return a;
    }
    NumberWithUnits operator++(NumberWithUnits &n)
    {
        return n;
    }
    NumberWithUnits operator--(NumberWithUnits &n)
    {
        return n;
    }
    NumberWithUnits operator++(NumberWithUnits &n, int)
    {
        return n;
    }
    NumberWithUnits operator--(NumberWithUnits &n, int)
    {
        return n;
    }
    NumberWithUnits operator*(NumberWithUnits &n, double d)
    {
        return n;
    }
    NumberWithUnits operator*=(NumberWithUnits &n, double d)
    {
        return n;
    }   
    NumberWithUnits operator*(double d, NumberWithUnits &n)
    {
        return n;
    }
    NumberWithUnits operator*=(double d, NumberWithUnits &n)
    {
        return n;
    }
    bool operator==(const NumberWithUnits &a, const NumberWithUnits &b)
    {
        return true;
    }
    bool operator!=(const NumberWithUnits &a, const NumberWithUnits &b)
    {
        return true;
    }
    bool operator>=(const NumberWithUnits &a, const NumberWithUnits &b)
    {
       return true;
    }
    bool operator<=(const NumberWithUnits &a, const NumberWithUnits &b)
    {
       return true;
    }
    bool operator>(const NumberWithUnits &a, const NumberWithUnits &b)
    {
        return true;
    }
    bool operator<(const NumberWithUnits &a, const NumberWithUnits &b)
    {
        return true;
    }
    void NumberWithUnits::read_units(ifstream &units_file)
    {

    }
    ostream &operator<<(ostream &os, const NumberWithUnits &n)
    { 
        return os;
    }
    istream &operator>>(istream &in, NumberWithUnits &n)
    {
        return in;
    }

}