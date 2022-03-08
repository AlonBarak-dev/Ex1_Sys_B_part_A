#include "mat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

namespace ariel {


    string even(char c1, char c2, int times, int cols){
        /*
            this method return a custom string for 
            even rows.
        */
        string res_string;
        for (int i = 0; i < cols; i++)
        {
            res_string.push_back(c1);
        }
        for(int i = 0; i < times; i++){
            
            res_string[2*i + 1] = c2;
            res_string[cols - 2*i - 2] = c2;
        }
        return res_string;
    }

    string odd(char c1, char c2, int times, int cols){
        /*
            this method return a custom string for 
            odd rows.
        */

        string res_string;
        for(int i = 0; i < cols; i++){
            res_string.push_back(c2);
        }
        for(int i = 0; i < times; i++){
            
            res_string[2*i] = c1;
            res_string[cols - 2*i - 1] = c1;
        }

        return res_string;
    }


    string mat(int col, int row, char c1, char c2){

        if ( (row % 2 == 0) || (col % 2 == 0)) {
            throw runtime_error("Rows and Cols size is invalid, try odd values");
        }
        if ((row < 0) || (col < 0)) {
            throw runtime_error("Rows and Cols size is invalid, try positive values");
        }

        string res_string;
        string buttom_half;
        string line;

        if (col == 1)
        {
            for (int i = 0; i < row; i++)
            {
                res_string.push_back(c1);
            }
            return res_string;
        }
        

        int times = 0;
        for (int i = 0; i < (row / 2 + 1); i++)
        {
            times = (i + 1) / 2; 

            if(i % 2 == 0){
                // even row index
                line = even(c1, c2, times, col);
                res_string.append(line);
                if(i != int(row / 2)){
                    buttom_half.insert(0, "\n");
                    buttom_half.insert(0, line);
                }
                
            }
            else{
                // odd row index
                line = odd(c1, c2, times, col);
                res_string.append(line);
                if(i != int(row / 2)){
                    buttom_half.insert(0, "\n");
                    buttom_half.insert(0, line);
                }
            }
            if(i != row - 1){
                // step one line down
                res_string.append("\n");
            }
        }
        res_string.append(buttom_half);
        return res_string;
    }    

}


// int main(){


//     cout << ariel::mat(15,1,'-',',') << endl;

//     return 0;
// }