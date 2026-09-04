CXX = g++
CC = gcc

CXXFLAGS = -Wall -Wextra -std=c++17
CFLAGS = -Wall -Wextra

SRC_C = 2-Extracao_de_emails/pegue_email.c
TARGET_C = $(SRC_C:.c=_c)

SRC = 2-Extracao_de_emails/pegue_email.cpp \
      3-Extracao_tag_html/pegue_tag.cpp \
      5-Análise_Léxica/Analisador_Léxico.cpp

TARGET = $(SRC:.cpp=_cpp)
OBJ = $(SRC:.cpp=.o)

all: $(TARGET) $(TARGET_C)

%_cpp: %.o
	$(CXX) $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET_C): $(SRC_C)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(TARGET) $(TARGET_C)