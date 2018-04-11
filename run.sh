rm -f *.dat a.out
python3 generate.py 5 20 5 3
c++ dot.cpp -o dot
./dot "A.dat" "B.dat"
