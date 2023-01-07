#include <iostream>
#include <cmath>
#include <stdexcept>

class Vector3D {
    private:
        double x;
        double y;
        double z;
    public:
        Vector3D(double x, double y, double z);
        ~Vector3D();
        double *get_values() const;
        void set_values(double x, double y, double z);
        double get_magnitude() const;
        Vector3D cross_product(Vector3D const & other) const;
        bool operator<(Vector3D const & other) const;
        double operator*(Vector3D const & other) const;
        Vector3D operator+(Vector3D const & other) const;
        Vector3D operator-(Vector3D const & other) const;
};

Vector3D::Vector3D(double x, double y, double z){
    if(std::isnan(x)){
        throw std::invalid_argument{"Invalid entry for the vector. Try again"};
    }
    else if(std::isnan(y)){
         throw std::invalid_argument{"Invalid entry for the vector. Try again"};
    }
    else if(std::isnan(z)){
         throw std::invalid_argument{"Invalid entry for the vector. Try again"};
    }

    this->x = x;
    this->y = y;
    this->z = z;
};

Vector3D::~Vector3D(){

}

double * Vector3D::get_values() const{
    double* a_entries = new double[3]{this->x, this->y, this->z};

    return a_entries;
}

void Vector3D::set_values(double x, double y, double z){
   if(std::isnan(x)){
        throw std::invalid_argument{"Invalid entry for the vector. Try again"};
    }
    else if(std::isnan(y)){
         throw std::invalid_argument{"Invalid entry for the vector. Try again"};
    }
    else if(std::isnan(z)){
         throw std::invalid_argument{"Invalid entry for the vector. Try again"};
    }

    this->x = x;
    this->y = y;
    this->z = z;
}

double Vector3D::get_magnitude() const{
    return sqrt(x*x + y*y + z*z);
}

#ifndef MARMOSET_TESTING
int main();
#endif

#ifndef MARMOSET_TESTING
int main(){
    Vector3D vector(1, 1, 1);

    std::cout << vector.get_magnitude() << std::endl;

    return 0;
}
#endif