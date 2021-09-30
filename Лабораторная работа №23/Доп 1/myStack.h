#pragma once
#include <algorithm>
#include <fstream>
#include <string>
struct Stack
{
	int data;
	Stack* head;
	Stack* next;
};

void show(Stack* myStk);
int pop(Stack* myStk);
void push(int x, Stack* myStk);
void clear(int g, Stack* myStk);
void onfail(Stack* myStk);
void infail();
void fun(Stack* myStk);