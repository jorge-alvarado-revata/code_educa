CXX		  := D://mingw//bin//g++.exe
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

BIN		:= C://Users//Jorge Alvarado//Documents//GitHub//2019-2-cpp//pc3_ejemplos_1//bin
SRC		:= C://Users//Jorge Alvarado//Documents//GitHub//2019-2-cpp//pc3_ejemplos_1//src
INCLUDE	:= C://Users//Jorge Alvarado//Documents//GitHub//2019-2-cpp//pc3_ejemplos_1//include
LIB		:= C://Users//Jorge Alvarado//Documents//GitHub//2019-2-cpp//pc3_ejemplos_1//lib

LIBRARIES	:=
EXECUTABLE	:= main


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*
