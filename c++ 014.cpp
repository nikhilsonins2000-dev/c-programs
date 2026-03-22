#include<iostream>
using namespace std;
class word
{
    public:
        char letter;
            void askchar()
            {
                cout<<"enter a charachter:";
                cin>>letter;

            }

            void check()
            {
                if(letter=='A')
                {
                    cout<<"ENTERED LETTER IS A VOWEL";
                }
                else if(letter=='E')
                {
                    cout<<"ENTERED LETTER IS A VOWEL";
                }
                else if(letter=='I')
                {
                    cout<<"ENTERED LETTER IS A VOWEL";
                }
                else if(letter=='O')
                {
                    cout<<"ENTERED LETTER IS A VOWEL";
                }
                else if(letter=='U')
                {
                    cout<<"ENTERED LETTER IS A VOWEL";
                }
                else
                {
                    cout<<"ENTERED LETTER IS NOT A VOWEL";
                }
            }
};






int main()
{
    word chara;
    chara.askchar();
    chara.check();
    return 0;
}
