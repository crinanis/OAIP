#pragma once
#define MYQUEUE1_EQE  0x0000
#include<iostream>
using namespace std;
struct Number {
	int info;
	Number* next;
};

void create(Number** begin, Number** end, int p);
void view(Number* begin);
void del(Number* begin, int p);
Number* minElem(Number* begin);
Number* maxElem(Number* begin);
Number* counting(Number* begin);