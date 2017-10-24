test: yiwei.o itoa.o
	cc -o test yiwei.o itoa.o
yiwei.o: yiwei.c itoa.h
	cc -c yiwei.c
itoa.o: itoa.c itoa.h
	cc -c itoa.c
