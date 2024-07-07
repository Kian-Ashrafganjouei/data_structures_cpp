CC =	g++
bank:	Main.o Account.o
		${CC} Main.o Account.o -o bank

Main.o:	Main.cpp
		${CC} -c -g Main.cpp

Account.o: Account.cpp
		${CC} -c -g Account.cpp

clean: 
	rm *.o bank