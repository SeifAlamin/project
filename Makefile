project: app.o
	gcc app.o -Llib -lmylib -o project

app.o: app.c
	gcc -c app.c -o app.o -Iheader
clean:
	rm app.o project
