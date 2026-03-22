#include<iostream>
#include<string>
using namespace std;
template<class T>
class container{
    public:
        T item;
        container(T x):item(x){}
        void display(){
            cout<<item<<endl;
        }
};
int main(){
    //to integer container data type
        container<int> int container(100);
        cout<<"int container:"<<int container.show();

        container<double> double container(12.33);
        cout<<"double container:"<<double container.show();

        container<float> float container(12.0);
        cout<<"float container:"<<float container.show();

        container<char> char container('a');
        cout<<"char container:"<<char container.show();

        //container<string> stringcontainer("solonglondon");
        //cout<<"string container:"<<stringcontainer.show();

        return 0;
}
