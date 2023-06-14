#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n;
    std::string number = "\nInput a natural number n:\n";
    std::string answer = "The result is: ";

    while (true)
    {
        std::cout << number;
        std::cin >> n;

        if (n <= 0 || n < 6)
        {
            std::cout << "Illegal operation or no result\n";
        }

        int prm;
        prm = 1;

        for (int j = 2; j < n; j++)
        {
            bool prn = true;
            for (int i = 2; i <= (j-1); i++)
            {
                if (j % i == 0)
                {
                    prn = false;
                    break;//not prost
                }


            }
            if (prn)
            {
                if (j == prm + 2)
                {
                    std::cout << answer << prm << " and " << j << std::endl;
                }
                prm = j;
            }

        }
    }


    return a.exec();
}
