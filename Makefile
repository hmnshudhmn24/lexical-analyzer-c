CC = gcc
CFLAGS = -Wall

all: lexical_analyzer

lexical_analyzer: lexical_analyzer.c
	$(CC) $(CFLAGS) lexical_analyzer.c -o lexical_analyzer

clean:
	rm -f lexical_analyzer