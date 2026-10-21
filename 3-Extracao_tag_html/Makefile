CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = pegue_tag_cpp

.PHONY: all clean

all: $(TARGET)

$(TARGET): pegue_tag.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(TARGET)
