# specfile/readspec Makefile

# gcc compiler
CC = gcc

# g++ compiler
CXX = g++

# gcc compiler flags
CFLAGS = -g -Wall -I.

# g++ compiler flags
CXXFLAGS = -g -Wall -I.

# g++ linker
CXX_LD = $(CXX)

#gcc linker
LD = $(CC)

# linker flags
LDFLAGS = 

# name of executable
EXE = mydb

# list of all sources
SOURCES = $(wildcard *.c)

# list of all objects
OBJECTS = $(SOURCES:.c=.o)

# Makefile
all: mydb
mydb: $(OBJECTS)
	$(LD) -o $(EXE) $(OBJECTS) $(LDFLAGS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning everything
clean:
	rm -f $(EXE) $(OBJECTS)
# End
