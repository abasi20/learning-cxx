#include "../exercise.h"

// READ: 运算符 <https://zh.cppreference.com/w/cpp/language/expressions#.E8.BF.90.E7.AE.97.E7.AC.A6>


int main(int argc, char **argv) {
    // if(arc!=2) return 1;
    int x ;
    if(argc==2){
        x = atoi(argv[1]);
    }else{
        x = 20;
    }
    
    // int x = 20;
    std::cout << x << " + " << x << " = " << x + x << std::endl;
    return 0;
}
