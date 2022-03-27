#include <iostream>
#include <fstream>

int main()
{
    int num;
    std::ifstream inputfile ("in.txt");
    std::ofstream outputfile ("out.txt");
    while(!inputfile.eof())
    {
        inputfile >> num;
        if (num % 3 == 0)
        {
            outputfile << num << " ";
        }
    }
    inputfile.close();
    outputfile.close();
    return 0;
}
