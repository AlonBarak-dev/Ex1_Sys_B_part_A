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

        string res_string = "";
        int times = 0;
        for (int i = 0; i < rows; i++)
        {
            times = (i + 1) / 2;

            if(i % 2 == 0){
                // even row index
                res_string = res_string + even(c1, c2, times, cols);
            }
            else{
                // odd row index
                res_string = res_string + odd(c1, c2, times, cols);
            }
            if(i != rows - 1){
                // step one line down
                res_string += "\n";
            }
        }
        return res_string;
    }    

    string even(char c1, char c2, int times, int cols){
        /*
            this method return a custom string for 
            even rows.
        */
        string res_string = "";
        for (int i = 0; i < cols; i++)
        {
            
        }
        


        return "";
    }

    string odd(char c1, char c2, int times, int cols){
        /*
            this method return a custom string for 
            odd rows.
        */

        return "";
    }

}