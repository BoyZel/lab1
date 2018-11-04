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
	void change_status(string s_n,int s_nu);
	void add(Product a);
	void show_all();
};
	
#endif
