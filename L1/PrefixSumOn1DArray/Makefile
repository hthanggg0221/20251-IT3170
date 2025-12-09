CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = prefix_sum_on_1d_array

SRC = prefix_sum_on_1d_array.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY: all clean