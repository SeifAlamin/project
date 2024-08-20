project: app.o
	@echo "linking application with the lib"
	@gcc app.o -Llib -lmylib -o project

app.o: app.c
	@echo "getting the object file from .c"
	@gcc -c app.c -o app.o -Iheader
clean:
	@echo "Removing project and Object file"
	@rm app.o project
