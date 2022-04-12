#Makefile
CC = g++
CCFLAGS = -g

usage:
	echo "make -f Makefile <executable name>/clean/today"

clean: 
	rm -f *.o

today: 
	echo "Today is"
	date

%.o : %.cpp
	$(CC) $(CCFLAGS) -c $<

% : %.cpp
	$(CC) $(CCFLAGS) -o $@ $<