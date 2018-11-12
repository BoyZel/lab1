#include "product.h"
#include "fridge.h"
#include "list.h"
using namespace std;
int main(){
	Product onion("onion",0,2.99);
	Product yoghurt("yoghurt",0,1.99);
	Product beer("beer",0,3.49);
	Product vodka("vodka",0,19.99);
	Status fridge;
	fridge.add(onion);
	fridge.add(yoghurt);
	fridge.add(beer);
	fridge.add(vodka);
	fridge.change_status("onion",5);
	cout<<"FRIDGE"<<endl;
	fridge.show_all();
	Status prefer;
	prefer.add(onion);
	prefer.add(yoghurt);
	prefer.add(beer);
	prefer.add(vodka);
	prefer.change_status("yoghurt",4);
	prefer.change_status("beer",2);
	prefer.change_status("vodka",11);
	cout<<endl<<"PREFERENCES"<<endl;
	prefer.show_all();
	cout<<endl<<"LIST"<<endl;
	List shopping;
	shopping.make(prefer,fridge);
	shopping.show_all();

	return 0;
}
