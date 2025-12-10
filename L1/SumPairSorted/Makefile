CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = sum_pair_sorted_sequence

SRC = sum_pair_sorted_sequence.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY:
	all clean