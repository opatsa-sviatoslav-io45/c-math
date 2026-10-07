CC=cc

main.out:	main.c
	$CC -lm -o main.out main.c

clean:V:
	rm -f .*out