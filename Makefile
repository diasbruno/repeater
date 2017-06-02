CC=clang

src/repeater.o: src/repeater.c
	$(CC) -c $< -o $@

repeater: src/repeater.o
	$(CC) -o $@ $<

.PHONY: repeater

all: repeater

install:
	cp repeater /usr/local/bin
	

clean:
	rm -rf src/repeater.o repeater
