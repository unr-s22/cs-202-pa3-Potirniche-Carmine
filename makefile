pa3: main.o money.o account.o
	g++ -std=c++11 -o pa3 main.o account.o money.o
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
money.o: money.cpp
	g++ -std=c++11 -c money.cpp
account.o: account.cpp
	g++ -std=c++11 -c account.cpp
clean:
	rm *.o