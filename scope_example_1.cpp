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
    int x,y,z;
    x=10;
    y=40;
    z=-3;

    std::cout<< "main just started and xyz are...\n" << "x: " << x << "\ty: " << y << "\tz: " << z << std::endl;

    std::cout << "calling sum3ints with x,x,y" << std::endl;
    x = sum3ints(x,x,y);
    std::cout << "x is now " << x << std::endl;
    std::cout << "calling vsum3ints with xyz" << std::endl;
    vsum3ints(x,y,z); //this has the side effect of priinting to screen, but since it did not return anything the sum cannot be used later

    std::cout << "Calling sum3ints in a compound way" << std::endl;
    x = sum3ints(sum3ints(y,y,z),sum3ints(y,z,z),sum3ints(x,z,y));

}
