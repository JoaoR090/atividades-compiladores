CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRC = 2-Extracao_de_emails/pegue_email.cpp \
      3-Extracao_tag_html/pegue_tag.cpp \
      5-Análise_Léxica/Analisador_Léxico.cpp

TARGET = $(SRC:.cpp=_cpp)

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

%_cpp: %.o
	$(CXX) $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)