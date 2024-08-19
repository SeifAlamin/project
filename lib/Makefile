
mylib := ../src/add.o ../src/sub.o ../src/div.o ../src/mult.o

LIBNAME := libmylib.a

lib: $(LIBNAME)

$(LIBNAME): $(mylib)
	@ar rcs $(LIBNAME) $(mylib)
 

../src/add.o: ../src/add.c
	echo $@
	@gcc -c ../src/add.c -o ../src/add.o -I../header
../src/sub.o: ../src/sub.c
	@gcc -c ../src/sub.c -o ../src/sub.o -I../header
../src/mult.o: ../src/mult.c
	@gcc -c ../src/mult.c -o ../src/mult.o -I../header
../src/div.o: ../src/div.c
	@gcc -c ../src/div.c -o ../src/div.o -I../header
	
clean:
	@echo "Cleaning lib files"
	@rm -f $(LIBNAME) 
	
cleanall: clean
	@echo "Cleanning all lib files"
	@rm -f $(mylib)
