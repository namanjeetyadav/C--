#include <iostream>
#include <string>
using namespace std;

class binary
{
private:

string s;
void check_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read()
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format";
            exit(0); // Exit the entire program
        }
    }
}

void binary ::ones_compliment()
{

    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display()
{
    // cout<<"Displaying your ones complement"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.check_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}