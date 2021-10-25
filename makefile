all:
	g++ HarolDOS.cpp -o HarolDOS
	g++ ChinaDOS.cpp -o ChinaDOS

production:
	g++ HarolDOS.cpp -o HarolDOS -pedantic -Os -s -ffast-math -fno-stack-protector -fno-unwind-tables -fno-asynchronous-unwind-tables -fmerge-all-constants -fno-math-errno -fno-unroll-loops -static-libgcc -static -static-libstdc++ -I.

	g++ ChinaDOS.cpp -o ChinaDOS -pedantic -Os -s -ffast-math -fno-stack-protector -fno-unwind-tables -fno-asynchronous-unwind-tables -fmerge-all-constants -fno-math-errno -fno-unroll-loops -static-libgcc -static -static-libstdc++ -I.
