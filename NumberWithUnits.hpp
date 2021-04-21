#include <iostream>
#include <string>
#include<map>
#include <stdio.h>

using namespace std;

namespace ariel
{
    class NumberWithUnits
    {    
        private:

            static inline map<string, map<string, double>> rates;
            double num;
            string type;
        
        public:

            NumberWithUnits(double num, string type)
            {
                this->type = type;
                this->num = num;
            }

            ~NumberWithUnits(){}

            static void read_units(ifstream &units_file);
            
            friend const NumberWithUnits operator+(const NumberWithUnits &a, const NumberWithUnits &b);

            friend const NumberWithUnits operator-(const NumberWithUnits &a, const NumberWithUnits &b);
            
            friend NumberWithUnits &operator+=(NumberWithUnits &a, const NumberWithUnits &b);
            
            friend NumberWithUnits &operator-=(NumberWithUnits &a, const NumberWithUnits &b);

            friend NumberWithUnits operator+(const NumberWithUnits &n);
            
            friend NumberWithUnits operator-(const NumberWithUnits &n);
            
            friend NumberWithUnits operator++(NumberWithUnits &n);

            friend NumberWithUnits operator--(NumberWithUnits &n);

            friend NumberWithUnits operator++(NumberWithUnits &n, int);

            friend NumberWithUnits operator--(NumberWithUnits &n, int);

            friend NumberWithUnits operator*(NumberWithUnits &n, double d);

            friend NumberWithUnits operator*=(NumberWithUnits &n, double d);

            friend NumberWithUnits operator*(double d, NumberWithUnits &n);
            
            friend NumberWithUnits operator*=(double d, NumberWithUnits &n);

            friend std::ostream &operator<<(ostream &os, const NumberWithUnits &n);
            
            friend std::istream &operator>>(istream &in, NumberWithUnits &n);

            friend bool operator==(const NumberWithUnits &a, const NumberWithUnits &b);

            friend bool operator!=(const NumberWithUnits &a, const NumberWithUnits &b);
            
            friend bool operator<(const NumberWithUnits &a, const NumberWithUnits &b);
            
            friend bool operator>(const NumberWithUnits &a, const NumberWithUnits &b);
            
            friend bool operator<=(const NumberWithUnits &a, const NumberWithUnits &b);
            
            friend bool operator>=(const NumberWithUnits &a, const NumberWithUnits &b);
          
    };
}