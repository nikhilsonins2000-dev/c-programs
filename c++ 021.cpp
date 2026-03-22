#include<iostream>
#include<string>
using namespace std;
class compare
{
    public:
        string word1;
        string word2;
            void getinput()
            {
                cout<<"enter a word:";
                cin>>word1;

                cout<<"enter a word again:";
                cin>>word2;
            }

            void check()
            {
                if(word1==word2) //this is method to compare strings in c++
                {
                    cout<<"both the entered words are same";

                }
                else
                {
                    cout<<"both entered words are different";
                }
            }
};

int main()
{
    compare words;
    words.getinput();
    words.check();
    return 0;
}
