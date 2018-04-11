rm -f *.dat a.out
c++ generate_matrix.cpp -o generate_matrix
./generate_matrix "A.dat"
./generate_matrix "B.dat"
c++ dot.cpp -o dot
./dot "A.dat" "B.dat"
