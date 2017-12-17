# dynArray
C Librairy - Easy Dynamic Array
This library permit to easly create array dynamically in C.

# More About dynArray Repo 
In this repository, you will find the library dynArray (dynArray.h & dynArray.c)
The main.c file is a exemple program for test the libray.

# For compile

> gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"dynArray.d" -MT"dynArray.o" -o "dynArray.o" "../dynArray.c"
> gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"main.d" -MT"main.o" -o "main.o" "../main.c"
> gcc  -o "dynArray"  ./dynArray.o ./main.o 

And Enjoy ! 
