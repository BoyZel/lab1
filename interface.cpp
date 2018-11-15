#include <iostream>
#include "interface.h"
using namespace std;
void Interface::interface(){
	Status fridge;
	Status preferences;
	List shopping;
	int option=0;
	string name;
	double price;
	int volume;
	Test test1;
	if(test1.check_the_m_expensive()==1 || test1.check_change_number(11)==1 || test1.check_add()==1 ||test1.check_make()==1){
		cout<<"FAILURE OF TESTS"<<endl;
		return;
	}

	cout<<"Welcome to the shopping list creator."<<endl;
	for(int i=0;i<15;i++){
		cout<<"What do you want to do?"<<endl;
		cout<<"1 - I wanna change/see my preferences"<<endl;
		cout<<"2 - I wanna change/see content of the fridge"<<endl;
		cout<<"3 - I wanna create/change/see my shopping list"<<endl;
		cout<<"5 - I wanna quit"<<endl;
		cin>>option;
		if(option==5)
			return;
		if(option==1){
			cout<<"You are in preferences mode. What do you wanna do?"<<endl;
			cout<<"0 - I want to add a product"<<endl;
			cout<<"1 - I want to change volume of a product"<<endl;
			cout<<"2 - I want to see my preferences"<<endl;
			cout<<"3 - I want to remove a product"<<endl;
			cin>>option;
			switch(option){
				case 0:
					{
					cout<<"What is the name of the product?"<<endl;
					cin>>name;
					cout<<"What is the volume?"<<endl;
					cin>>volume;
					cout<<"What is the price?"<<endl;
					cin>>price;
					Product newest(name,volume,price);
					preferences.add(newest);
					}
					break;
				case 1:
					{
					cout<<"You want to change the volume of which product?"<<endl;
					cin>>name;
					cout<<"What is the new volume?"<<endl;
					cin>>volume;
					preferences.change_status(name,volume);
					}
					break;
				case 3:
					{
					cout<<"Which product do you want do delete from you preferences?"<<endl;
					cin>>name;
					preferences.remove(name);
					}
					break;
				case 2:
					{
					cout<<"PREFERENCES:"<<endl;
					preferences.show_all();
					}
					break;
			}
		}
		else if(option==2){
			cout<<"You are in fridge mode. What do you wanna do?"<<endl;
			cout<<"0 - I want to add a product"<<endl;
			cout<<"1 - I want to change volume of a product"<<endl;
			cout<<"2 - I want to see the content of my fridge"<<endl;
			cout<<"3 - I want to remove a product"<<endl;
			cin>>option;
			switch(option){
				case 0:
					{
					cout<<"What is the name of the product?"<<endl;
					cin>>name;
					cout<<"What is the volume?"<<endl;
					cin>>volume;
					cout<<"What is the price?"<<endl;
					cin>>price;
					Product newest(name,volume,price);
					fridge.add(newest);
					}
					break;
				case 1:
					{
					cout<<"You want to change the volume of which product?"<<endl;
					cin>>name;
					cout<<"What is the new volume?"<<endl;
					cin>>volume;
					fridge.change_status(name,volume);
					}
					break;
				case 3:
					{
					cout<<"Which product do you want do delete from you preferences?"<<endl;
					cin>>name;
					fridge.remove(name);
					}
					break;
				case 2:
					{
					cout<<"FRIDGE:"<<endl;
					fridge.show_all();
				}
					break;
			}
		}
		else if(option==3){
			cout<<"You are in creating list mode. What do you wanna do?"<<endl;
			cout<<"0 - I want to add a product"<<endl;
			cout<<"1 - I want to create a list based on my preferences and fridge"<<endl;
			cout<<"2 - I want to see the content of my fridge"<<endl;
			cout<<"3 - I want to remove a product"<<endl;
			cout<<"4 - I want to see the most expensive product"<<endl;
			cin>>option;
			switch(option){
				case 0:
					{
					cout<<"What is the name of the product?"<<endl;
					cin>>name;
					cout<<"What is the volume?"<<endl;
					cin>>volume;
					cout<<"What is the price?"<<endl;
					cin>>price;
					Product newest(name,volume,price);
					shopping.add_to_list(newest);
					}
					break;
				case 1:
					{
						shopping.make(preferences,fridge);
					}
					break;
				case 3:
					{
					cout<<"Which product do you want do delete from the list?"<<endl;
					cin>>name;
					shopping.delete_a_product(name);
					}
					break;
				case 2:
					{
					cout<<"LIST:"<<endl;
					shopping.show_all();
					}
					break;
				case 4:
					{
					shopping.the_m_expensive();
					}
					break;
			}
		}
	}
}
