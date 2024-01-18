PROJECT = projectName

CC = gcc
CFLAGS = -Wall -g -std=c2x
LFLAGS = -lm 

SOURCES = main.c

build:
	$(CC) $(CFLAGS) $(SOURCES) -o $(PROJECT) $(LFLAGS)

run: build 
	./$(PROJECT)
