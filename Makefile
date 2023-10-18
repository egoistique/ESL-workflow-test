all: vector3d.o test_app

vector3d.o: vector3d.c vector3d.h
    gcc -c vector3d.c -o vector3d.o

test_app: test_app.c vector3d.o
    gcc test_app.c vector3d.o -o test_app

clean:
    rm -f vector3d.o test_app

