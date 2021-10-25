export PATH="$coreutils/bin:$gcc/bin"
mkdir $out
g++ -o $out/HarolDOS $src  -I.

g++ -o $out/ChinaDOS $src2 -I.