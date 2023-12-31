#!/bin/bash

FILE_NAME=$1
gcc $1
./$(basename $1 .c)
