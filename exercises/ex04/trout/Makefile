# trout: trout.h trout.c util.c
# 	gcc -g -o trout trout.c util.c


util.o: util.c util.h
	gcc -g -c $< -o $@

trout.o: trout.c trout.h util.h
	gcc -g -c $< -o $@

main.o: main.c trout.h util.h
	gcc -g -c $< -o $@

main: main.o trout.o util.o
	gcc -g $^ -o $@


