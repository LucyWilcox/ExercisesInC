CFLAGS=`pkg-config --cflags glib-2.0`
LDFLAGS=`pkg-config --libs glib-2.0`
CC=gcc

TARGET=word_count

ex_compile: 
	$(CC) $(CFLAGS) $(TARGET).c $(LDFLAGS) -o $(TARGET)