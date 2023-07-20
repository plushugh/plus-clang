 #! /bin/bash
# Finds most recently updated c file in this dir, then compiles, runs, and deletes

CFLAGS="-ansi -Iinclude -Wall"

TEMPFILES="core core.* *.o temp.* *.out"

# Find most recently updated c file that  is not in include/ and lib/ directory
cfile=$(find . -type f -not -path "./lib/*" -not -path "./include/*" -name "*.c" | sort -n | tail -1 | cut -d' ' -f2-)
echo "Found $cfile"

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