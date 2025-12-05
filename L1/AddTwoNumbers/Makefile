CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -g

SRC = AddTwoNumbers_basic.cpp \
	AddTwoNumbers_advance.cpp \
	AddTwoNumbers_string.cpp \
	AddTwoNumbers_string_2.cpp

EXECS = $(SRC:.cpp=)

all: $(EXECS)

%: %.cpp
	$(CXX) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECS)

.PHONY: all clean
