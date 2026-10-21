CC = gcc
CXX = g++

CFLAGS = -Wall -Wextra
CXXFLAGS = -Wall -Wextra -std=c++17

TARGETS = pegue_email_c pegue_email_cpp

.PHONY: all clean

all: $(TARGETS)

pegue_email_c: pegue_email.c
	$(CC) $(CFLAGS) $< -o $@

pegue_email_cpp: pegue_email.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
