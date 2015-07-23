CC=g++
IDIR=../SFML/include
CFLAGS=-I$(IDIR)

LDIR=../SFML/lib
LFLAGS=-L$(LDIR)
LIBS=-lsfml-graphics -lsfml-window -lsfml-system

sample: main.o
	$(CC) $^ -o $@ $(LFLAGS) $(LIBS)

main.o: main.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ sample
