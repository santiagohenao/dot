rm -f *.dat a.out
python3 generate.py 3 20 3 3
c++ dot.cpp -o dot
./dot "A.dat" "B.dat"
