#include <iostream>
#include <string>

using namespace std;

namespace ariel {

    string mat(int rows, int cols, char c1, char c2){

        if((rows % 2 == 0) || (cols % 2 == 0)){
            throw "Mat size is always odd";
        }

        if((rows < 0) || (cols < 0)){
            throw "Mat size can't take negative numbers as input";
        }

        





        return "";
    }    


}