#!/bin/bash

# Try to find a portable way of getting rid of
# any stray carriage returns
if which dos2unix ; then
    DOS2UNIX="dos2unix"
elif which fromdos ; then
    DOS2UNIX="fromdos"
else
    >&2 echo "warning: dos2unix is not installed."
    # This should work on Linux and MacOS, it matches all the carriage returns with sed and removes
    # them.  `tr` is used instead of `sed` because some versions of `sed` don't recognize the
    # carriage return symbol.  Something similar could be implemented with `sed` if necessary or
    # worst case it could be disabled by substituting it with `cat`.  One other thing to note is
    # that there are no quotes around the \r, which is so that it gets converted by bash.
    DOS2UNIX="tr -d \r"
    # DOS2UNIX="sed -e s/\r//g"
    # DOS2UNIX="cat"
fi

echo "========================================"
echo " Cleaning the temporaries and outputs"
make clean
echo " Force building bin/print_canonical"
make bin/print_canonical -B
if [[ "$?" -ne 0 ]]; then
    echo "Build failed.";
fi
echo ""

echo "========================================="
echo "Checking that good expressions are parsed"

PASSED=0
CHECKED=0

if [[ -f test/valid_expressions.got.txt ]]; then
    rm test/valid_expressions.got.txt
fi
rm test/error.log
rm test/output.log
rm test/ast.log

INPUT_FILE="test/input.cpp"
INPUT=$(cat "$INPUT_FILE")

# Process the input with print_canonical and print the output
GOT=$(echo "$INPUT" | bin/print_canonical)
echo "========================================="
echo "$GOT"



RELEASE=$(lsb_release -d)
if [[ $? -ne 0 ]]; then
    echo ""
    echo "Warning: This appears not to be a Linux environment"
    echo "         Make sure you do a final run on a lab machine or an Ubuntu VM"
else
    grep -q "Ubuntu 20.04" <(echo $RELEASE)
    FOUND=$?

    if [[ $FOUND -ne 0 ]]; then
        echo ""
        echo "Warning: This appears not to be the target environment"
        echo "         Make sure you do a final run on a lab machine or an Ubuntu VM"
    fi
fi
