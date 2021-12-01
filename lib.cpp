//
// Created by bianc on 01/12/2021.
//

#include "lib.h"
bool conversione (char &a){
    bool t = true;
    if (a>= 65 & a<=90 or a>=97 &a<=122){
        t= true;
        if(a>=65 & a<= 90){
            a=a+32;
            return &a;
        }
    }else{
        t=false;
    }
    return t;
}
