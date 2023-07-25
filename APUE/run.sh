 #! /bin/bash

CFLAGS="-ansi -Iinclude -Wall"

TEMPFILES="core core.* *.o temp.* *.out"

# get user input for c file
echo "Enter the path of the c file you want to run (with .c):"
read cfile

# Compile lib
echo "Compiling lib"
gcc $CFLAGS -c -o lib/error.o lib/error.c

# Compile latest
echo "Compiling ${cfile%.*}"
gcc $CFLAGS -o ${cfile%.*} $cfile lib/error.o

# Make it executable
chmod +x ${cfile%.*}

# Run
echo "Running ${cfile%.*}"
${cfile%.*}

# Delete
echo "Finished execution, deleting ${cfile%.*} and lib/error.o"
rm ${cfile%.*}
rm lib/error.o