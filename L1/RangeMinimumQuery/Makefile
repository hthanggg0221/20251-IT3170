CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = rmq

SRC = rmq.cpp

all: ${TARGET}

${TARGET}: ${SRC}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY:
	all clean