// Geesaman_Daniel_M3_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();
void test10();
void test11();
void test11b();
void test12();
void test13();
void test14();
void test14b();
void test15();

int main()
{
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
    test11();
    test11b();
    test12();
    test13();
    test14();
    test14b();
    test15();
}
void test1()
{
    Date testDate1{};
    cout << "Test default constructor: ";
    testDate1.printDate(1);
    cout << endl << endl;
}

void test2()
{
    Date testDate2{03,23,2003};
    cout << "Test inputting a date and printing it: ";
    testDate2.printDate(2);
    cout << endl << endl;
}

void test3()
{
    Date testDate3{};
    cout << "Test inputting a date using setDate and printing it: ";
    testDate3.setDate(04,12,1956);
    testDate3.printDate(3);
    cout << endl << endl;
}

void test4()
{
    Date testDate4{};
    cout << "Test inputting a bad date using setDate and printing the error: ";
    testDate4.setDate(13, 45, 2018);
    testDate4.printDate(1);
    cout << endl << endl;
}

void test5()
{
    Date testDate5{};
    cout << "Test inputting a bad date using setDate and printing the error: ";
    testDate5.setDate(04, 31, 2000);
    testDate5.printDate(1);
    cout << endl << endl;
}

void test6()
{
    Date testDate6{};
    cout << "Test inputting a bad date using setDate and printing the error: ";
    testDate6.setDate(02, 29, 2009);
    testDate6.printDate(1);
    cout << endl << endl;
}

void test7()
{
    Date testDate7{};
    cout << "Test subtraction operator overload: ";
    Date v1(04,10,2014);
    Date v2(04,18,2014);
    Date diff = v1 - v2;
    cout << endl << endl;
}

void test8()
{
    Date testDate8{};
    cout << "Test subtraction operator overload (different values): ";
    //Date v1(11, 10, 2003);
    //Date v2(02, 02, 2006);
    Date v1(02, 02, 2006);
    Date v2(11, 10, 2003);
    Date diff = v1 - v2;
    cout << endl << endl;
}

void test9()
{
    Date testDate9{02,01,2008};
    cout << "Test pre-decrement operator: ";
    --testDate9;
    testDate9.printDate(1);
    cout << endl << endl;
}

void test10()
{
    Date testDate10{ 02,01,2008 };
    cout << "Test pre-increment operator: ";
    --testDate10;
    ++testDate10;
    testDate10.printDate(1);
    cout << endl << endl;
}

void test11()
{
    Date testDate11{ 02,01,2008 };
    cout << "Test post-decrement operator: ";
    Date x = testDate11--;
    x.printDate(1);
    cout << endl << endl;
}

void test11b()
{
    Date testDate11b{ 02,01,2008 };
    cout << "Test post-increment operator: ";
    testDate11b--;
    Date x = testDate11b++;
    x.printDate(1);
    cout << endl << endl;
}

void test12() 
{
    Date testDate12{ 12,31,2024 };
    cout << "Test post-increment operator with year change: ";
    testDate12++;
    testDate12.printDate(1);
    cout << endl << endl;
}

void test13()
{
    Date testDate13{ 12,31,2024 };
    cout << "Test post-decrement operator with year change: ";
    testDate13++;
    testDate13--;
    testDate13.printDate(1);
    cout << endl << endl;
}

void test14()
{
    Date testDate14{ 12,31,2024 };
    cout << "Test pre-increment operator with year change: ";
    ++testDate14;
    testDate14.printDate(1);
    cout << endl << endl;
}

void test14b()
{
    Date testDate13{ 12,31,2024 };
    cout << "Test pre-decrement operator with year change: ";
    ++testDate13;
    --testDate13;
    testDate13.printDate(1);
    cout << endl << endl;
}

void test15()
{

}