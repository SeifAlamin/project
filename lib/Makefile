
mylib := ../src/add.o ../src/sub.o ../src/div.o ../src/mult.o

LIBNAME := libmylib.a

lib: $(LIBNAME)
	@echo "Your Lib is ready"

$(LIBNAME): $(mylib)
	@ar rcs $(LIBNAME) $(mylib)
 

../src/add.o: ../src/add.c
	@echo $@ 
	@gcc -c ../src/add.c -o ../src/add.o -I../header
../src/sub.o: ../src/sub.c
	@echo $@
	@gcc -c ../src/sub.c -o ../src/sub.o -I../header
../src/mult.o: ../src/mult.c
	@echo $@
	@gcc -c ../src/mult.c -o ../src/mult.o -I../header
../src/div.o: ../src/div.c
	@echo $@
	@gcc -c ../src/div.c -o ../src/div.o -I../header
	
clean:
	@echo "Cleaning lib files"
	@rm -f $(LIBNAME) 
	
cleanall: clean
	@echo "Cleaning all lib files"
	@rm -f $(mylib)
