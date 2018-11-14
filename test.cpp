#include "test.h"
using namespace std;
int Test::check_the_m_expensive(){
		
		List test_object;
		Product p1("tomato",5,6.73);
		Product p2("beer",2,7.73);
		Product p3("vodka",3,2.48);
		test_object.add_to_list(p1);
		test_object.add_to_list(p2);
		test_object.add_to_list(p3);
		Product tmp("nothing",0,0);
		tmp=test_object.the_m_expensive();
		if(tmp.show_name()=="tomato")
			return 0;
		else
			return 1;
}
int Test::check_change_number(int a){
	Product example("tomato",5,7.33);
	example.change_number(a);
	if(example.show_number()==a)
		return 0;
	else
		return 1;
}
int Test::check_add(){
		Product tmp1("tomato",5,4.27);
		Product tmp2("bottle",3,8.12);
		Status test_stat;
		test_stat.add(tmp1);
		test_stat.add(tmp2);
		Product tmp3,tmp4;
		tmp3=test_stat.show_prod(0);
		tmp4=test_stat.show_prod(1);
		if(tmp3.show_name()==tmp1.show_name() && tmp4.show_name()==tmp2.show_name())
			return 0;
		else
			return 1;
}
int Test::check_make(){
		Product tmp1("tomato",5,4.27);
		Product tmp2("bottle",3,8.12);
		Product tmp3("tomato",6,4.27);
		Product tmp4("bottle",2,8.12);
		Status test1;
		Status test2;
		test1.add(tmp1);
		test1.add(tmp2);
		test2.add(tmp3);
		test2.add(tmp4);
		List list;
		list.make(test1,test2);
		Product tmp;
		tmp=list.element(0);
		if(tmp.show_name()=="bottle" && tmp.show_number()==1)
			return 0;
		else
			return 1;
}
//need to change the whole class
