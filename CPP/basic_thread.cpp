#include<iostream>
#include<thread>


void print_this(){
	std::cout << "This is Executed by Thread " << std::endl;
}

int main(int argc, char** argv)
{
	std::thread th1(print_this);
	std::thread th2(print_this);
	std::thread th3(print_this);
	std::thread th4(print_this);
	th1.join();
	th2.join();
	th3.join();
	th4.join();
	return 0;
}



