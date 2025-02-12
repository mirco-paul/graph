.PHONY: test clean

test: test/run_tests.cpp
	g++ -o test_binary test/run_tests.cpp

clean:
	rm -f test_binary
	
