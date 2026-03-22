#include<iostream>
#include<string>
using namespace std;
template <class T>
class container{
    public:
        T item;
        container(T x):item(x) {}
        T show(){
            return item;
        }
};
int main(){
    //to integer container data type
        container<int> intcontainer(100);
        std::cout<<"int container:"<<intcontainer.show();

        container<double> doublecontainer(12.33);
        std::cout<<" \n double container:"<<doublecontainer.show();

        container<float> floatcontainer(12.0);
        std::cout<<" \n float container:"<<floatcontainer.show();

        container<char> charcontainer('a');
        std::cout<<"\nchar container:"<<charcontainer.show();

        //container<string> stringcontainer("solonglondon");
        //cout<<"string container:"<<stringcontainer.show();

        return 0;
}
