#include "list.h"
#include <algorithm>
using namespace std;
void List::make(Status preferences, Status what_i_have){
	int np=preferences.size();
	int nw=what_i_have.size();
	for(int i=0;i<np;i++){
		Product next=preferences.show_prod(i);
		for(int j=0;j<nw;j++){
			Product tmp=what_i_have.show_prod(j);
			if(next.show_name()==tmp.show_name()){
				next.change_number(max(0,next.show_number()-tmp.show_number()));
				break;
			}
		}
		if(next.show_number()>0)
			thingstobuy.add(next);
	}
}
void List::delete_a_product(string name){
	thingstobuy.remove(name);
}
Product List::the_m_expensive(){
	int num=thingstobuy.size();
	Product biggest("nothing",0,0);
	double maximum;
	/*if(num==0)
		return NULL;*/
	for(int i=0;i<num;i++){
		Product tmp=thingstobuy.show_prod(i);
		if(tmp.show_number()*tmp.show_price()>maximum){
			biggest=tmp;
			maximum=tmp.show_number()*tmp.show_price();
		}
	}
	return biggest;
}
void List::add_to_list(Product newest){
	thingstobuy.add(newest);
}
void List::show_all(){
	thingstobuy.show_all();
}
		
Product List::element(int a){
	return thingstobuy.show_prod(a);
}



