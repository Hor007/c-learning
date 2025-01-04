#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"The number 0.01 in fixed: " << std::fixed << 0.01 <<'\n'
        <<"The number 0.01 in scientific: "<<std::scientific<<0.01 <<'\n'
        <<"The number 45 in hexadecima: " << std::hex << 45 <<'\n'
        <<"The number 78 in octal: " << std::'octal' << 78 <<'\n'
        <<"The number 234 in decimal: " << std::'decimal'<< 234 <<'\n'
        //<<"The number o.01 in default: " << std::default << 0.01 <<'\n';
        //'defaultfloat' in not a member of 'std';
int n;
std::istringstream("2A") >> std::hex >>'n';
std::cout <<std::dec << "Parsing \"2A\" as hex gives "<<n<< '\n';
}