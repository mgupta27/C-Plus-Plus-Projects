unsigned int factorial( unsigned int n);
unsigned int binomial( unsigned int n, unsigned int k );
unsigned int fibonacci( unsigned int n );

unsigned int factorial( unsigned int n ){
    if(n <= 1){
        return 1;
    }
    else{
        unsigned int simpler_result{ factorial(n - 1) };
        return (n * simpler_result);
    }
}

unsigned int binomial( unsigned int n, unsigned int k ){
    if(k > n){
        return 0;
    }
    else if( (k == 0) || (k == n) ){
        return 1;
    }
    else{
        unsigned int result_1{ binomial(n - 1, k) };
        unsigned int result_2{ binomial(n - 1, k - 1) };
        return result_1 + result_2;
    }
}

unsigned int fibonacci( unsigned int n ){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        unsigned int result_1{ fibonacci(n - 1) };
        unsigned int result_2{ fibonacci(n - 2) };
        return result_1 + result_2;
    }
}