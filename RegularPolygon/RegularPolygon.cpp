#include <cmath>

class RegularPolygon {
    private:
        int num_of_sides;
        double side_length;
    public:
        RegularPolygon(int side_num, double length);
        ~RegularPolygon();
        int get_qty_sides() const;
        double get_side_length() const;
        double get_area() const;
        bool operator<(RegularPolygon const & other) const;
};

RegularPolygon::RegularPolygon(int side_num, double length)
{
    if(side_num > 0 && length > 0){
         num_of_sides = side_num;
        side_length = length;
    }
    else {
        num_of_sides = 3;
        side_length = 1;
    }
}

int RegularPolygon::get_qty_sides() const{
    return num_of_sides;
}

double RegularPolygon::get_side_length() const{
    return side_length;
}

double RegularPolygon::get_area() const{
    double perimeter{ num_of_sides * side_length };
    double apothem{ side_length / (2 * tan(M_PI/num_of_sides))};

    return (perimeter * apothem)/2.0;
}

bool RegularPolygon::operator<(RegularPolygon const & other) const{
    return (this->get_area() < other.get_area());
}

RegularPolygon::~RegularPolygon()
{
}

#ifndef MARMOSET_TESTING
int main();
#endif


#ifndef MARMOSET_TESTING

int main() {
    RegularPolygon p(4, 2);

    return 0;
}
#endif