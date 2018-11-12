#include "fridge.h"
using namespace std;
void Status::change_status(string s_n,int s_nu){
	for(int i=0;i<present.size();i++)
		if(s_n==present[i].show_name()){
			present[i].change_number(s_nu);
			break;
		}
}
void Status::add(Product a){
	present.push_back(a);
}
void Status::show_all(){
	for(int i=0;i<present.size();i++){
		cout<<present[i].show_name()<<" ";
		cout<<present[i].show_number()<<" ";
		cout<<present[i].show_price()<<endl;
	}
}
Product Status::show_prod(int a){
	return present[a];
}
int Status::size(){
	return present.size();
}
void Status::remove(string s_n){
	for(int i=0;i<present.size();i++)
		if(s_n==present[i].show_name()){
			swap(present[i],present[present.size()-1]);
			present.pop_back();
			break;
		}
}
	
