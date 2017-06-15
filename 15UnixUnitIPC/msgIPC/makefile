.PHONY:all
all:client server

client:client.c comm.h comm.c  
	gcc -o $@ $^
server:server.c comm.h comm.c
	gcc -o $@ $^

.PHONY:clean
clean:
	rm -f server client

