CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = Analisador_Léxico_cpp

.PHONY: all clean

all: $(TARGET)

$(TARGET): Analisador_Léxico.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(TARGET)
