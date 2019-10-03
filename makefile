make:main.cp
	g++ main.cp -Weffc++ -Wall -std=c++11
run:a.out
	./a.out
clean: 
	rm a.out
