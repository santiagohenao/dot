# dot
Matricial dot product

## About .dat files

Every `.dat` file contains, separated by `" "` and `"\n"`, rows and columns of a matrix -BUT in the first line contains always two values containing the dimensions (number of rows, number of columns)  

## Two ways of do it

### 1

`$ sh run.sh` will generate 2 sample multiplicable matrices using numpy, and then save them in "A.dat" and "B.dat". The default value of dimension is A(5x20) and B(20x5). Then the script compiles `dot.cpp` into binary file `dot`, and finally, `./dot "A.dat" "B.dat"` multiply A and B matrices, and save the result in `Result.dat`.

### 2

`sh input.sh` will read 2 matrix from user interactive input, and then save it in the same  "A.dat" and "B.dat" files and multiply them in the same way.
