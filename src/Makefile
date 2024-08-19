
MYOBJ := add.o mult.o sub.o div.o

all: $(MYOBJ)

sub.o: sub.c
	gcc -c $< -o $@ -I../header
add.o: add.c
	gcc -c $< -o $@ -I../header
mult.o: mult.c
	gcc -c $< -o $@ -I../header
div.o: div.c
	gcc -c $< -o $@ -I../header

clean:
	rm $(MYOBJ)
