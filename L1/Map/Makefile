CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = map

SRC = map.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY:
	all clean