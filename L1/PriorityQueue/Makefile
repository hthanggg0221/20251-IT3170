CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = priority_queue

SRC = priority_queue.cpp

all: ${TARGET}

${TARGET} : ${SRC}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET}

.PHONY:
	all clean