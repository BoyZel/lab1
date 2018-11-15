#ifndef _FRIDGE_H
#define _FRIDGE_H
#include <iostream>
#include <vector>
#include <string>
#include "product.h"
using namespace std;
class Status{
	vector<Product> present;
	public:
	void change_status(string,int);
	void add(Product);
	void remove(string);
	void show_all();
	Product show_prod(int);
	int size();
};
	
#endif
