all: ily

ily: main.c
	gcc -o ily main.c -std=c99

clean:
	rm ily