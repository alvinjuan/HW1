#include <iostream>
using namespace std;

class square {

    public:
        square(int l = 0, int w = 0){
            length = l;
            width = w;
        }
        int getLength() const{return length;}
            
        int getWidth() const {return width;}

        square operator + (square const &s){
            square res;
            res.length = length + s.length;
            res.width = width + s.width;
            return res;
        }
        square operator += (square const &s){
            this->length += s.length;
            this->width += s.width;
            return *this;
        }
        bool operator == (square const &s){
            return (length == s.length & width == s.width);
        }

    private:
        int length;
        int width;
};

int main(){
    square s1(10,12), s2(6,8);
    square s3 = s1 + s2;
    square s4(5,2);
    s4 += s1;

    cout << "Length: " << s3.getLength() << " , " << "Width: " << s3.getWidth() <<endl;
    cout << "Length: " << s4.getLength() << " , " << "Width: " << s4.getWidth() <<endl;
    cout << "True or False: " << (s3 == s4) << endl;
};