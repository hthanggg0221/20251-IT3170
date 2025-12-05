CC = g++

CFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = IntegerInjury

SRC = IntegerInjury.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CC} ${CFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY: all clean