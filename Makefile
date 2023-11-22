FileComp: main.o File.o
	g++ main.o File.o -o FileComp

main.o: src/main.cpp src/NumToStr.h
	g++ -c src/main.cpp

File.o: src/File.cpp src/File.h
	g++ -c src/File.cpp

clean:
	rm *.o FileComp
