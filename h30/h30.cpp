/**
 *  @file h30.cpp
 *  @author Put your name here
 *  @version Put the semester and meeting time here
 */
#include <string>
#include <stdexcept>
#include <sstream>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h30.h"

// Implement your class and operators here
static int gcd(int x, int y)

    {

        int r = x % y;

        while(r != 0)

        {

            x = y;

            y = r;

            r = x % y;

        }

        return y;

    }


    Fraction::Fraction(int n)

    {

        numerator_ = n;

        denominator_ = 1;

    }

    Fraction::Fraction(int n, int d)

    {

        numerator_ = n;

        denominator_ = d;

        if(d == 0)  cout << "Invalid arguments.";

        else if (n == 0)

        {

            numerator_ = 0;

            denominator_ = 1;

        }

        else

        {

            int g = gcd(abs(n), abs(d));

            numerator_ = n/g;

            denominator_ = abs(d)/g;

            if(d < 0)

            {

                numerator_ = -numerator_;

            }

        }

    }


    Fraction& Fraction::operator+=(const Fraction& rhs)

    {

        int a = numerator_;

        int b = denominator_;

        int c = rhs.numerator_;

        int d = rhs.denominator_;

        *this = Fraction(a * d + b * c, b * d);

        return *this;

    }

    Fraction& Fraction::operator-=(const Fraction& rhs)

    {

        int a = numerator_;

        int b = denominator_;

        int c = rhs.numerator_;

        int d = rhs.denominator_;

        *this = Fraction(a * d - b * c, b * d);

        return *this;

    }

    Fraction& Fraction::operator*=(const Fraction& rhs)

    {

        int a = numerator_;

        int b = denominator_;

        int c = rhs.numerator_;

        int d = rhs.denominator_;

        *this = Fraction(a * c, b * d);

        return *this;

    }

    Fraction& Fraction::operator/=(const Fraction& rhs)

    {

        int a = numerator_;

        int b = denominator_;

        int c = rhs.numerator_;

        int d = rhs.denominator_;

        *this = Fraction(a * d, b * c);

        return *this;

    }


    const Fraction operator+(const Fraction& lhs, const Fraction& rhs)

    {

        Fraction result(lhs);

        return result += rhs;

    }

    const Fraction operator-(const Fraction& lhs, const Fraction& rhs)

    {

        Fraction result(lhs);

        return result -= rhs;

    }

    const Fraction operator*(const Fraction& lhs, const Fraction& rhs)

    {

        Fraction result(lhs);

        return result *= rhs;

    }

    const Fraction operator/(const Fraction& lhs, const Fraction& rhs)

    {

        Fraction result(lhs);

        return result /= rhs;

    }


    string Fraction::toString() const

    {


        ostringstream out;

        to_string(numerator_);

        to_string(denominator_);

        out << numerator_;

        if(denominator_ != 1)

            out << "/" << denominator_;

        return out.str();

    }


    ostream& operator<<(ostream& out, const Fraction& f)

    {

        out << f.toString();

        return out;

    }



/////////////// STUDENT TESTING ////////////////////

int run()
{
    cout << "Uncomment these and use make run to test." << endl;
    // Fraction a(3, 6); // 1/2 after reducing
    // Fraction b(1, 3); // 1/3
    // Fraction c(1, 6); // 1/6

    // Fraction sum = a + b + c;

    // cout << a << " + " << b << " + " << c
    //     << " = " << sum << endl;

    return 0;
}

