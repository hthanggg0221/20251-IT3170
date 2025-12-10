CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

SRC = sum_pair_non_sorted_sequence.cpp \
	sum_pair_non_sorted_sequence_v2.cpp

EXECS = ${SRC:.cpp=}

all: ${EXECS}

%: %.cpp
	${CXX} ${CXXFLAGS} $< -o $@

clean:
	rm -f ${EXECS}

.PHONY:
	all clean