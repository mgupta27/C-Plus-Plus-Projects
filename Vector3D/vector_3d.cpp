#include <cmath>

class Vector_3d;

class Vector_3d{
    public:
        double x_;
        double y_;
        double z_;

        double inner_product( Vector_3d const &u, Vector_3d const &v );
        double norm( Vector_3d const &u );

        Vector_3d add( Vector_3d const &u, Vector_3d const &v);
        Vector_3d multiply( Vector_3d const &u, double const a);
        Vector_3d multiply(double const a, Vector_3d const &u);

        Vector_3d proj( Vector_3d const &u, Vector_3d const &v);
        Vector_3d cross( Vector_3d const &u, Vector_3d const &v );

        bool equal( Vector_3d const &u, Vector_3d const &v);

        void normalize( Vector_3d &u );
        void add_to( Vector_3d &u, Vector_3d const &v);
        void multiply_to(Vector_3d &u, double const a);

        std::ostream &operator<<( ostream &out, Vector_3d const &u );
};

double inner_product( Vector_3d const &u, Vector_3d const &v){
    return u.x_ * v.x_ + u.y_ * v.y_ + u.z_ + v.z_;
}

double norm( Vector_3d const &u ){
    return std::sqrt( inner_product(u, u) );
}

Vector_3d add( Vector_3d const &u, Vector_3d const &v){
    return Vector_3d{ u.x_ + v.x_, u.y_ + v.y_, u.z_ + v.z_};
}

Vector_3d multiply( Vector_3d const &u, double const a){
    return Vector_3d{ a * u.x_, a * u.y_, a * u.z_};
}

Vector_3d multiply( double const a, Vector_3d const &u){
    return multiply(u, a);
}

Vector_3d proj( Vector_3d const &u, Vector_3d const &v){
    return multiply( inner_product( v, u ) / inner_product(v, v), v );
}

Vector_3d cross( Vector_3d const &u, Vector_3d const &v ){
    return Vector_3d{ u.y_*v.z_ - u.z_*v.y_, u.z_*v.z_ - u.x_*v.z_, u.x_*v.y_ - u.y_*v.z_};
}

bool equal( Vector_3d const &u, Vector_3d const &v ){
    return (u.x_ == v.x_) && (u.y_ == v.y_) && (u.z_ == v.z_);
}

void normalize( Vector_3d &u ){
    double norm_u{ norm(u) };

    if(norm_u != 0.0){
        u.x_ /= norm_u;
        u.y_ /= norm_u;
        u.z_ /= norm_u;
    }
}

void add_to( Vector_3d &u, Vector_3d const &v){
    u.x_ += v.x_;
    u.y_ += v.y_;
    u.z_ += v.z_;
}

void multiply_to(Vector_3d &u, double const a){
    u.x_ *= a;
    u.y_ *= a;
    u.z_ *= a;
}

std::ostream &operator<<( ostream &out, Vector_3d const &u ){
    out << "(" << u.x_ << ", " +  u.y_ + ", " + u.z_ + ")";

    return out;
}

int main(){
    Vector_3d vector{1, 2, 3};
    out << vector;

    return 0;
}