#include <iostream>
#include <fstream>
#include <string>

void f(std::ostream &os)
{
    std::cin.clear(); // clear EOF flags
    std::cin.seekg(0, std::cin.beg); // seek to begin

    std::string line;
    while(std::getline(std::cin, line))   //input from the file in.txt
        os << line << "\n";   //output to the file out.txt
}

void test()
{
    std::ifstream in("in.txt");
    // performs input/output operations on the specified file.
    std::ofstream out("out.txt"), err("err.txt"), log("log.txt");
    // performs input/output operations on the specified file.
    std::streambuf *cinbuf = std::cin.rdbuf(), 
                        *coutbuf = std::cout.rdbuf(),
                            *cerrbuf = std::cerr.rdbuf(),
                                *clogbuf = std::clog.rdbuf();

    std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!
    std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
    std::cerr.rdbuf(err.rdbuf());
    std::clog.rdbuf(log.rdbuf());


    f(std::clog);
    f(std::cerr);
    f(std::cout);

    std::cin.rdbuf(cinbuf);
    std::cout.rdbuf(coutbuf);
    std::cerr.rdbuf(cerrbuf);
    std::clog.rdbuf(clogbuf);
}

int main()
{
    test();
    std::cout << "123" << std::endl;
}