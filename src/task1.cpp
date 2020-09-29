#include "task1.h"
#include <cstring>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;

int comp1(const void* a, const void* b)//����� �����(��������� �� ��������) - ��� int
{
	return (*(const int*)a - *(const int*)b);
}

int comp2(const void* a, const void* b)//������������ �����(��������� �� ��������) - ��� double
{
	return (*(const double*)a - *(const double*)b) > 0.0 ? 1 : -1;
}

int comp3(const void* a, const void* b)//������(��������� �� �����) - ��� const char*
{
	return (strlen(*(const char**)a) - strlen(*(const char**)b));
}

int comp4(const void* a, const void* b)//������(��������� �� ��������) - ��� const char*
{
	return strcmp((*(const char**)a), (*(const char**)b));
}

int comp5(const void* a, const void* b)//������(��������� �� ���������� ��������) - ��� const char*
{
	string str1 = *(const char**)a;
	string str2 = *(const char**)b;
	int space1{ 0 }, space2{ 0 };

	space1 = count(str1.begin(), str1.end(), ' ');
	space2 = count(str2.begin(), str2.end(), ' ');

	return space1 - space2;
}

int comp6(const void* a, const void* b)//��������� Person (��������� �� ��������)
{
	return (((const Person*)a)->age - ((const Person*)b)->age);
}