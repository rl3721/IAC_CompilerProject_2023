CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all : bin/c_compiler

src/parser.tab.cpp src/parser.tab.hpp : src/parser.y
	bison -v -d src/parser.y -o src/parser.tab.cpp

src/lexer.yy.cpp : src/lexer.flex src/parser.tab.hpp
	flex -o src/lexer.yy.cpp  src/lexer.flex

bin/c_compiler : src/cli.cpp src/compiler.o src/parser.tab.o src/lexer.yy.o src/parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^

bin/print_canonical : src/print_canonical.o src/parser.tab.o src/lexer.yy.o src/parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_canonical $^


clean :
	rm src/*.o
	rm bin/*
	rm src/*.tab.cpp
	rm src/*.yy.cpp
	rm src/parser.output
	rm src/parser.tab.hpp

