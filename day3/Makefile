stats: stats.o libstats.a
	g++ -L. -o stats stats.o -lstats

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
	rm -f libstats.a

libstats.a: data.o calc.o
	ar crv libstats.a data.o calc.o
	ranlib libstats.a
