#include <iostream>

namespace myMath {
int divide(int a, int b) {
    return a/b;
}

int mult(int a, int b) {
    return a*b;
}
} // end of myMath

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


void test6(){
    int ans = add(1,2);
    if(ans == 3) {
        std::cout << "test6 passed !!" << std::endl;
    } else {
        std::cout << "test6 failed !!" << std::endl;
    }
}


void test7(){
    int ans = sub(2,2);
    if(ans == 0) {
        std::cout << "test7 passed !!" << std::endl;
    } else {
        std::cout << "test7 failed !!" << std::endl;
    }
}

void test8(){
    int ans = sub(4,2) + 1;
    if(ans == 2) {
        std::cout << "test8 passed !!" << std::endl;
    } else {
        std::cout << "test8 failed !!" << std::endl;
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
    std::cout << "Started testing..." << std::endl;
    
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();

    std::cout << "Done testing!!" << std::endl;
    return 0;
}
