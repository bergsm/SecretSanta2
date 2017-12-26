all:
	g++ -g -std=c++0x Hat.cpp Person.cpp main.cpp random.cpp input_validation.cpp menu.cpp People.cpp -o SecretSanta

clean:
	rm -f *.o *~ SecretSanta