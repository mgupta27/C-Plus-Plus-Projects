#include <iostream>

int main();
int isqrt( int n );

int main(){
    try {
        std::cout << isqrt( 100 ) << std::endl;
        std::cout << isqrt( -100 ) << std::endl;
    }
    catch( std::domain_error &e ) {
        std::cout << "An exception was caught" << std::endl;
        std::cout << " - the error string was \"" << e.what() << "\"" << std::endl;
    }

    // if I do catch ( ... ), it works for all exceptions that are thrown
    
    return 0;
}

int isqrt( int n ){
    int result{0};
    int rem{0};
    
    if ( n < 0 ){
        throw std::domain_error{ "Cannot compute the square root of " + std::to_string( n ) };
    }
    else {
        for(int k{15}; k >= 0; --k){
            rem <<= 2;
            rem += ( n >> (k << 1) ) & 3;
            result <<= 1;
            int sub{ (result << 1) | 1 };

            if(sub <= rem) {
                result |= 1;
                rem -= sub;
            }
        }
    }

    return result;
}