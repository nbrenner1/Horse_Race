#makefile for horseRace

all: horseRace

horseRace: main.o horse.o race.o
		g++ -c horse.cpp
		g++ -c race.cpp
		g++ -c main.cpp
		g++ main.o race.o horse.o -o horseRace
		
run:
		./horseRace
		
clean:
		rm *.o
		rm horseRace
		
valgrind:
		--leak-check=yes ./horseRace
