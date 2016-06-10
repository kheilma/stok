all:
	g++ -o program main.cpp -std=c++11 -lcURLpp -lOptions -lclone_ptr
clean:
	$(RM) program
