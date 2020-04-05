//
// Created by Administrator on 2020/4/2.
//

#include <iostream>

using namespace std;

char *retrunPointer(char *cp);

int main() {

    //整形指针
//    int i = 123;
//    printf("&i is %X\n", &i);
//    printf("sizeof(i) is %d\n", sizeof(i));//int变量占4位
//
//    int *ip = &i;
//    printf("ip is %X\n", ip);
//    printf("sizeof(ip) is %d\n", sizeof(ip));//指针变量占8位（64位处理器）
//
//    printf("ip is %X\n", ++ip);//指针自加1，地址前进4位（int占4位）



    //数组指针
//    int arr[] = {1, 2, 4, 1};
//    int *p = arr;
//    printf("%d \n", *p);
//    printf("p is %X\n", p);
//    printf("%d \n", *++p);
//    printf("p is %X\n", p);
//    printf("%d \n", *++p);
//    printf("p is %X\n", p);
//    printf("%d \n", *++p);
//    printf("p is %X\n", p);



    //字符指针
//    char c = 'g';
//    cout << sizeof(c) << endl;
//
//    char *cp = &c;
//    cout << *cp << endl;
////    cout << hex << cp << endl;//打印地址，不要使用流模式，使用printf()
//    printf("%X \n", cp);
//    printf("%X \n", ++cp);



    //字符数组
//    char c[] = "ab";
//    printf("sizeof(c) is %d\n", sizeof(c));
//    printf("%X\n", c);
//
//    char *p = c;
//    printf("sizeof(c) is %d\n", sizeof(p));
//    printf("%X\n", p);

    //常量指针
//    int i = 21;
//    const int *pInt = &i;
//    //int const *pInt = &i;
//    cout << *pInt << endl;
//
//    *pInt = 81;
//    i = 91;
//    cout << *pInt << endl;
//
//    int j = 54;
//    pInt = &j;
//    cout << *pInt << endl;


    //指针常量
//    int i = 21;
//    int *const pInt;
//    cout << *pInt << endl;
//
//    *pInt = 81;
//    i = 91;
//    cout << *pInt << endl;
//
//    int j = 54;
//    pInt = &j;
//    cout << *pInt << endl;


    return 0;
}