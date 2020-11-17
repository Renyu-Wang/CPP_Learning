ntl: ntl.cpp
	#g++ -std=c++11 `itpp-config --cflags` -o bicycle.out func.cpp main.cpp  `itpp-config --libs`
	g++ -std=c++11 `itpp-config --cflags` -pthread -march=native -o ntl.out ntl.cpp  `itpp-config --libs` -lntl -lgmp -lm 
clean:
	rm *.out