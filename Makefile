list: main.o product.o fridge.o
	g++ main.o product.o fridge.o -o list
	rm *o
main.o: main.cpp
	g++ -c main.cpp
product.o: product.cpp
	g++ -c product.cpp
fridge.o: fridge.cpp
	g++ -c fridge.cpp
