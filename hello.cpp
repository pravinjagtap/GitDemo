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

void test5(){
    int ans = add(6,6);
    if(ans == 12) {
        std::cout << "test5 passed !!" << std::endl;
    } else {
        std::cout << "test5 failed !!" << std::endl;
    }
}

void test9(){
    int ans = sub(10,6);
    if(ans == 4) {
        std::cout << "test9 passed !!" << std::endl;
    } else {
        std::cout << "test9 failed !!" << std::endl;
    }
}

void test10(){
    int ans = sub(111,11);
    if(ans == 100) {
        std::cout << "test10 passed !!" << std::endl;
    } else {
        std::cout << "test10 failed !!" << std::endl;
    }
}

int main() {
    std::cout << "Hello World!!" << std::endl;
    test1();
    test2();
    test3();
    test4();
    test5();
    test9();
    test10();
    return 0;
}
