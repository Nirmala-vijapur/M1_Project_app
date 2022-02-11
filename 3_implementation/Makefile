#TargetName : Dependencies
#<TAB>commands

Build : project_main.c calculator.c
	gcc project_main.c calculator.c -o calculator.out -lm

Run : Build
	./calculator.out

clean:
	rm -rf *.o *.out *.i *.s
