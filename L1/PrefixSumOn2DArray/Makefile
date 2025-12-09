CC = g++

CFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = prefix_sum_on_2d_array

SRC = prefix_sum_on_2d_array.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CC} ${CFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY: all clean