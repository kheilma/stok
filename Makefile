all:
	g++ -o program main.cpp -std=c++11 -l/curlpp-master/include/curlpp
clean:
	$(RM) program
