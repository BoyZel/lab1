#include "product.h"
#include <iostream>
#include <string>
using namespace std;
void Product::insert(string n, int nu, double p){
	name=n;
	number=nu;
	price=p;
}
Product::Product(string a,int b,double c){
	insert(a,b,c);
}
void Product::change_number(int a){
	number=a;
}
string Product::show_name(){
	return name;
}
int Product::show_number(){
	return number;
}
double Product::show_price(){
	return price;
}
