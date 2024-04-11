#This is a sample makefile. You may adapt it to your case.

all: output.exe
 
# $@ matches the target; $< matches the first dependent
output.o: vulnerability1.c
	gcc -c Example4.c
     
output.exe: output.o
	gcc -o output.exe Example4.c

clean:
	rm output.o output.exe