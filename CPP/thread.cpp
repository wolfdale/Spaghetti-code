// g++  thread_imple.cpp -o thread_imple.out -pthread -std=c++11  

#include<iostream>
#include<thread>

using namespace std;

void thread_func(void)
{
    cout<<"This is Thread Function"<<endl;
}

int main (int main ,char *argv[])
{
    thread t1(thread_func);
    t1.join();
}
