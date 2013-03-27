stats: stats.o data.o calc.o
	g++ -o stats stats.o data.o calc.o

stats.o: stats.cpp data.hpp calc.hpp
	g++ -c stats.cpp

data.o: data.cpp data.hpp
	g++ -c data.cpp

calc.o: calc.cpp calc.hpp
	g++ -c calc.cpp

clean:
	rm -f stats.o data.o calc.o

veryclean: clean
	rm -f stats
