#ifndef _LIST_H
#define _LIST_H
#include <iostream>
#include "fridge.h"
#include "product.h"
#include <vector>
using namespace std;
class List{
	Status thingstobuy;
	public:
	void make(Status,Status);
	void delete_a_product(string);
	Product the_m_expensive();
	void add_to_list(Product);
	void show_all();
};

#endif

