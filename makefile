all:hello-cpp.out hello-eigen.out hello-itpp.out hello-openmp.out
hello-cpp.out:hello-cpp.cpp
	g++ -o hello-cpp.out hello-cpp.cpp
hello-eigen.out:hello-eigen.cpp
	g++ -o hello-eigen.out hello-eigen.cpp
hello-itpp.out:hello-itpp.cpp
	g++ `itpp-config --cflags` -o hello-itpp.out hello-itpp.cpp `itpp-config --libs`
hello-openmp.out:hello-openmp.cpp
	g++ -o hello-openmp.out hello-openmp.cpp -fopenmp -std=c++11
clean:
	rm *.out
test:
	make all
	./hello-cpp.out
	./hello-eigen.out
	./hello-itpp.out
	./hello-openmp.out