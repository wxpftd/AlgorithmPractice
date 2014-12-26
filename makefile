a.out: test.cpp
	g++ -std=c++11 -Wall -o a.out test.cpp

clean:
	rm a.out
