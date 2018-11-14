list: main.o product.o fridge.o list.o test.o interface.o
	g++ main.o product.o fridge.o list.o test.o interface.o -o list
	rm *o
main.o: main.cpp
	g++ -c main.cpp
product.o: product.cpp
	g++ -c product.cpp
fridge.o: fridge.cpp
	g++ -c fridge.cpp
list.o: list.cpp
	g++ -c list.cpp
test.o: test.cpp
	g++ -c test.cpp
interface.o: interface.cpp
	g++ -c interface.cpp
