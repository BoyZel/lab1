#ifndef _PRODUCT_H
#define _PRODUCT_H
#include <iostream>
#include <string>
using namespace std;
class Product{
	int number;
	double price;
	string name;
	public:
	void insert(string n, int nu, double p);
	Product(string a, int b, double c);
	void change_number(int a);
	string show_name();
	int show_number();
	double show_price();
};
#endif
