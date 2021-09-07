linux:
	g++ main.cpp -o HarolDOS -pedantic -Os -s -ffast-math -fno-stack-protector -fno-unwind-tables -fno-asynchronous-unwind-tables -fmerge-all-constants -fno-math-errno -fno-unroll-loops
	sudo cp HarolDOS /usr/local/bin/HarolDOS
	sudo chmod +x /usr/local/bin/HarolDOS
