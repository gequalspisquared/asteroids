asteroids: src/main.o
	g++ src/main.o -o bin/asteroids -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	g++ src/main.cpp -c