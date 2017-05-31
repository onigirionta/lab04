#include <iostream>
#include <cstdint>
#include <string.h>
#include "hex_print.h"
#include "bin_print.h"
using namespace std;

int check_operation_input(char operation){
    if((operation == '&')||(operation == '|')||(operation == '^'))
        return 0;
    else
        cerr << "\nError! Wrong operation";
        return 1;
}

struct student
{
    char name[17];
    uint16_t year_start;
    float rate;
    uint8_t gender : 2;
    uint8_t num_c;
};

int main(){

    student group[3];

    strcpy(group[0].name,"Dar'ya");
    group[0].year_start = 2015;
    group[0].rate = 4.33;
    group[0].gender = 0;
    group[0].num_c = 2;


    strcpy(group[1].name,"Ivan");
    group[1].year_start = 2014;
    group[1].rate = 3.55;
    group[1].gender = 1;
    group[1].num_c = 2;


    strcpy(group[2].name,"Oleg");
    group[2].year_start = 2015;
    group[2].rate = 4.76;
    group[2].gender = 0;
    group[2].num_c = 2;

    uint16_t first_op,second_op,result;
    char operation;

    cin >> first_op >> operation >> second_op;

    if(check_operation_input(operation) == 1) return 0;

    switch(operation){
        case '&':
            result = first_op & second_op;
            break;
        case '|':
            result = first_op | second_op;
            break;
        case '^':
            result = first_op ^ second_op;
            break;
        default:{};
    }

    cout<<"\nHEX:\n";

    print_in_hex(&first_op, sizeof(first_op));
    cout << " " << operation << " ";
    print_in_hex(&second_op, sizeof(second_op));
    cout << " = ";
    print_in_hex(&result, sizeof(result));

    cout << "\n\nBIN:\n";

    print_in_binary(&first_op, sizeof(first_op));
    cout<<" "<<operation<<" ";
    print_in_binary(&second_op, sizeof(second_op));
    cout << " = ";
    print_in_binary(&result, sizeof(result));

    return 0;
}




