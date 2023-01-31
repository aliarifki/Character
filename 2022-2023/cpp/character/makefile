main: main.o Character.o
	g++ -o main main.o Character.o

main.o: main.cpp Character.h
	g++ -o main.o -c main.cpp

Character.o: Character.cpp Character.h
	g++ -o Character.o -c Character.cpp

clean:
	rm main main.o Character.o
