CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = segment_tree_simulation

SRC = segment_tree_simulation.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY: all clean