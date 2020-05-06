#include <iostream>

//sum 3 ints, return result
int sum3ints(int a, int b, int c){
    std::cout << "++++++++" << std::endl; 
    std::cout << "we have entered sum3ints with the arguments\na: " << a <<"\tb: " << b << "\tc: " << c << std::endl;
    int x = a+b+c;
    std::cout << "x = " << x << std::endl;
    std::cout << "we are leaving  sum3ints with the arguments\na: " << a <<"\tb: " << b << "\tc: " << c << std::endl;
    std::cout << "--------" << std::endl;
    return x; 
}

//sum 3 ints, do not  return result
void vsum3ints(int a, int b, int c){
    std::cout << "++++++++" << std::endl; 
    std::cout << "we have entered vsum3ints with the arguments\na: " << a <<"\tb: " << b << "\tc: " << c << std::endl;
    int x = a+b+c;
    std::cout << "x = " << x << std::endl;
    std::cout << "we are leaving  vsum3ints with the arguments\na: " << a <<"\tb: " << b << "\tc: " << c << std::endl;
    std::cout << "--------" << std::endl;
    return; 

}



int main(){
    int a,b,c;
    a=-110;
    b=43;
    c=6;

    std::cout<< "main just started and abc are...\n" << "a: " << a << "\tb: " << b << "\tc: " << c << std::endl;

    std::cout << "calling sum3ints with a,a,b" << std::endl;
    int x = sum3ints(a,a,b);
    std::cout << "x is now " << x << std::endl;
    std::cout << "calling vsum3ints with a,b,c" << std::endl;
    vsum3ints(a,b,c); //this has the side effect of priinting to screen, but since it did not return anything the sum cannot be used later

    std::cout << "Calling sum3ints in a compound way" << std::endl;
    x = sum3ints(sum3ints(b,b,c),sum3ints(b,c,a),sum3ints(a,x,b));

}
