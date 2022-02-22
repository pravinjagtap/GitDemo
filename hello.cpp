#include <iostream>

int sub(int a, int b) {
    return a-b;
}

int add(int a, int b) {
    return a+b;
}

void test1(){
    int ans = add(5,5);
    if(ans == 10) {
        std::cout << "test1 passed !!" << std::endl;
    } else {
        std::cout << "test1 failed !!" << std::endl;
    }
}

void test2(){
    int ans = add(2,2);
    if(ans == 4) {
        std::cout << "test2 passed !!" << std::endl;
    } else {
        std::cout << "test2 failed !!" << std::endl;
    }
}

void test3(){
    int ans = add(3,3);
    if(ans == 6+1) {
        std::cout << "test3 passed !!" << std::endl;
    } else {
        std::cout << "test3 failed !!" << std::endl;
    }
}

void test4(){
    int ans = add(9,9);
    if(ans == 18) {
        std::cout << "test4 passed !!" << std::endl;
    } else {
        std::cout << "test4 failed !!" << std::endl;
    }
}

int main() {
    std::cout << "Hello World!!" << std::endl;
    test1();
    test2();
    test3();
    test4();
    return 0;
}
