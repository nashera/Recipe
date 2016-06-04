#include <thread>
#include <iostream>
using namespace std;

void my_thread()
{
	std::cout << "this is test" << std::endl;
	std::cout << "hello, world" << std::endl;
}

int main(int argc, char *argv[])
{
	std::thread t(my_thread);
	t.join();
	return 0;
}