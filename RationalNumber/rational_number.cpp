#include <iostream>

int gcd(int m, int n);

class Rational {
    public:
        int numerator_;
        int denominator_;

        Rational operator+( Rational const &q ){
            int numerator{ this->numerator_*q.denominator_ + q.numerator_*this->denominator_ };
            int denominator{ this->denominator_ * q.denominator_ };
            int divisor{ gcd(numerator, denominator) };

            if(denominator < 0){
                denominator = -denominator;
                numerator = -numerator;
            }

            return Rational{ numerator/divisor, denominator/divisor };
        }

        bool operator==( Rational const &q ){
            return this->numerator_ * q.numerator_ == q.numerator_ * this->denominator_;
        }

        bool operator!=( Rational const &q ){
            return !(*this == q);
        }
};


int main(){
    int m{ 15 };
    int n{ 17 };

    Rational p{ 15, 1};
    Rational q{ 17, 1};
    Rational sum{ p + q };

    std::cout << "m + n = " << (m + n) << std::endl;
    std::cout << "p + q = " << (p != q) << std::endl;

    // std::cout << "-m" << (-m) << std::endl;
    // std::cout << "-p" << (-p) << std::endl;
}

int gcd(int num1, int num2){
    while(num1 % num2 != 0){
        int remainder{num1 % num2};
        num1 = num2;
        num2 = remainder;
    }

    return num2;
}