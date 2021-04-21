#include <string>
#include <fstream>
#include "NumberWithUnits.hpp"
#include "doctest.h"

using namespace std;
using namespace ariel;

ifstream units_file{"units.txt"};

NumberWithUnits USD_1{1, "USD"};
NumberWithUnits USDless_1{-1, "USD"};
NumberWithUnits ILS_33{3.3, "ILS"};
NumberWithUnits ILSless_33{-3.3, "ILS"};
NumberWithUnits hour_05{0.5, "hour"};
NumberWithUnits hour_1{1, "hour"};
NumberWithUnits min_60{60, "min"};
NumberWithUnits min_1{1, "min"};
NumberWithUnits sec_60{60, "sec"};
NumberWithUnits m_1{1, "m"};
NumberWithUnits m_1000{1000, "m"};
NumberWithUnits cm_1{1, "m"};
NumberWithUnits km_1{1, "km"};
NumberWithUnits ton_1{1, "ton"};
NumberWithUnits g_1000{1000, "g"};
NumberWithUnits g_1{1, "g"};
NumberWithUnits kg_1{1, "kg"};

TEST_CASE("+")
{
    NumberWithUnits::read_units(units_file);
    
    CHECK_EQ(min_1 + 0.5 * sec_60, 1.5 * sec_60);
    CHECK_EQ(min_1 + 0.5 * sec_60, 1.5 * min_1);
    CHECK_EQ(hour_1 + hour_05, 90 * min_1);
    CHECK_EQ(kg_1 + 400 * g_1, 1400 * g_1);

}
TEST_CASE("-")
{
    NumberWithUnits::read_units(units_file);

    CHECK_EQ(min_1 - 0.5 * sec_60, 0.5 * sec_60);
    CHECK_EQ(min_1 - 0.5 * sec_60, 0.5 * min_1);
    CHECK_EQ(hour_1 - hour_05, 30 * min_1);
    CHECK_EQ(kg_1 - 400 * g_1, 600 * g_1);
    
}
TEST_CASE("=")
{
    NumberWithUnits::read_units(units_file);

    CHECK_EQ(hour_1, min_60);
    CHECK_EQ(min_1, sec_60);
    CHECK_EQ(USD_1, ILS_33);
    CHECK_EQ(USD_1, ILS_33);
    CHECK_EQ(km_1, m_1000);
    CHECK_EQ(kg_1, g_1000);

}
TEST_CASE("!=")
{
    NumberWithUnits::read_units(units_file);

    CHECK_NE(USDless_1, USD_1);
    CHECK_NE(USD_1, 0.4 * ILS_33);
    CHECK_NE(km_1, 1200 * m_1);
    CHECK_NE(km_1, m_1);
    CHECK_NE(kg_1, 500 * g_1);

}
TEST_CASE("*")
{
    NumberWithUnits::read_units(units_file);
    CHECK_EQ(2 * min_1, 2 * sec_60);
    CHECK_EQ(5 * hour_1, 5 * min_60);
    CHECK_EQ(km_1, 1000 * m_1);
    CHECK_EQ(kg_1, 1000 * g_1);  

}
TEST_CASE("-=")
{
    NumberWithUnits::read_units(units_file);

    CHECK_EQ(ILSless_33, -ILS_33);
    CHECK_EQ(USDless_1, -USD_1);
    
}
TEST_CASE(">")
{
    NumberWithUnits::read_units(units_file);

    CHECK_GT(USD_1, 0.4 * ILS_33);
    CHECK_GT(km_1, m_1);
    CHECK_GT(kg_1, 0.8 * g_1000);

}
TEST_CASE("<")
{
    NumberWithUnits::read_units(units_file);

    CHECK_GT(km_1, 1200 * m_1);
    CHECK_GT(km_1, m_1000 + 5 * cm_1);
    CHECK_GT(USDless_1, USD_1);
    
}

