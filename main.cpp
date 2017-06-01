#include <iostream>
#include <iomanip> 
#include <cstdint>
#include <string.h>
#include <cctype>
#include <cstring>
#include <fstream>
<<<<<<< HEAD
#include <cstddef>
#include <bitset>
=======
>>>>>>> 9fdae3fe75f85bb4abe9c8eebcf0630d3add5674
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

struct Student
{
    char name[17];
    uint16_t year_start;
    float rate;
    uint8_t gender : 1;
    uint16_t num_c;
    Student* groupHead;
};

<<<<<<< HEAD
=======
void partIV(){

    char file_name[256];

    cout << "Enter file name: ";
    cin >> file_name;

    if((strchr(file_name,'*') != NULL)||(strchr(file_name,'"') != NULL) ||
        (strchr(file_name,'<') != NULL)||(strchr(file_name,'>') != NULL)||
        (strchr(file_name,'?') != NULL)||(strchr(file_name,'|') != NULL)){
        puts("Error! Incorrect file name");
        return;
    }


    if((strchr(file_name,':') != NULL)&& 
      (!(((strchr(file_name,':') - file_name + 1) == 2)&& 
      (((strchr(file_name,'\\') - file_name + 1) == 3)|| 
       isalpha(1) != 0)))){
        cout << "Error! Incorrect file name";
    } 

    int a = strlen(file_name);

    char * lastDotPnt = strrchr(file_name, '.');

    if(lastDotPnt != NULL){
        if(strcoll(lastDotPnt, ".txt")!=0){
            strcat(file_name, ".txt");
        }
    }
    else
    {
        strcat(file_name, ".txt");
    }
     
    ifstream ifs(file_name);
    int file_length = 0;

    if (ifs) {
        ifs.seekg (0, ifs.end);
        file_length = ifs.tellg();
        ifs.seekg (0, ifs.beg); 
        char * file_content = new char[file_length];
        ifs.read(file_content, file_length);
        ifs.close();

        cout << "Enter a string to search for (up to 255 characters):" << endl;
        char substr[256];
        cin >> substr;

        int count = 0;
        const char *tmp = file_content;
        while(tmp = strstr(tmp, substr))
        {
           count++;
           tmp++;
        }
        cout << "The string \"" << substr << "\" occures in the file " << file_name << " "  << count << " times." << endl;
        delete[] file_content;
        delete[] tmp;
    }

    delete[] lastDotPnt;
}

>>>>>>> 9fdae3fe75f85bb4abe9c8eebcf0630d3add5674
void partII(){
    uint16_t first_op,second_op,result;
    char operation;

    cout << "Syntax:" << endl << "<operand> <& | ^> <operand>" << endl;
    cin >> first_op >> operation >> second_op;

    if(check_operation_input(operation) == 1) return;

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
    cout << endl;
}

void partIII(){
<<<<<<< HEAD
    Student group[3];
=======
    student group[3];
>>>>>>> 9fdae3fe75f85bb4abe9c8eebcf0630d3add5674

    strcpy(group[0].name,"Daria");
    group[0].year_start = 2015;
    group[0].rate = 4.33;
    group[0].gender = 0;
    group[0].num_c = 2;
<<<<<<< HEAD
    group[0].groupHead = NULL;
=======
>>>>>>> 9fdae3fe75f85bb4abe9c8eebcf0630d3add5674


    strcpy(group[1].name,"Ivan");
    group[1].year_start = 2014;
    group[1].rate = 3.55;
    group[1].gender = 1;
<<<<<<< HEAD
    group[1].num_c = 3;
    group[1].groupHead = group;
=======
    group[1].num_c = 2;
>>>>>>> 9fdae3fe75f85bb4abe9c8eebcf0630d3add5674


    strcpy(group[2].name,"Oleg");
    group[2].year_start = 2015;
    group[2].rate = 4.76;
    group[2].gender = 0;
    group[2].num_c = 2;
<<<<<<< HEAD
    group[2].groupHead = group;


    cout << left << setw(16) << "Array address" << right << setw(16)  << group << endl;
    cout << left << setw(16) << "Array size" << right << setw(16)  << sizeof(group) << endl;
    cout << "name:" << endl;
        cout << "\t" << left << setw(10) << "Value"  << right << setw(16) << group[1].name << endl;
        cout << "\t" << left << setw(10) << "Addres" << right << setw(16) << &group[1].name << endl;
        cout << "\t" << left << setw(10) << "Offset" << right << setw(16) << offsetof(Student, name) << endl;
        cout << "\t" << left << setw(10) << "Size"   << right << setw(16) << sizeof(group[1].name) << endl;
        cout << "\t" << left << setw(10) << "Hex"    << endl; print_in_hex(group[1].name, sizeof(group[1].name)); cout << endl;
        cout << "\t" << left << setw(10) << "Binary" << endl; print_in_binary(group[1].name, sizeof(group[1].name)); cout << endl;
    cout << "year_start:" << endl;
        cout << "\t" << left << setw(10) << "Value"  << right << setw(16) << group[1].year_start << endl;
        cout << "\t" << left << setw(10) << "Addres" << right << setw(16) << &group[1].year_start << endl;
        cout << "\t" << left << setw(10) << "Offset" << right << setw(16) << offsetof(Student, year_start) << endl;
        cout << "\t" << left << setw(10) << "Size"   << right << setw(16) << sizeof(group[1].year_start) << endl;
        cout << "\t" << left << setw(10) << "Hex"    << endl; print_in_hex(&(group[1].year_start), sizeof(group[1].year_start)); cout << endl;
        cout << "\t" << left << setw(10) << "Binary" << endl; print_in_binary(&(group[1].year_start), sizeof(group[1].year_start)); cout << endl;
    cout << "rate:" << endl;
        cout << "\t" << left << setw(10) << "Value"  << right << setw(16) << group[1].rate << endl;
        cout << "\t" << left << setw(10) << "Addres" << right << setw(16) << &group[1].rate << endl;
        cout << "\t" << left << setw(10) << "Offset" << right << setw(16) << offsetof(Student, rate) << endl;
        cout << "\t" << left << setw(10) << "Size"   << right << setw(16) << sizeof(group[1].rate) << endl;
        cout << "\t" << left << setw(10) << "Hex"    << endl; print_in_hex(&(group[1].rate), sizeof(group[1].rate)); cout << endl;
        cout << "\t" << left << setw(10) << "Binary" << endl; print_in_binary(&(group[1].rate), sizeof(group[1].rate)); cout << endl;
    cout << "num_c:" << endl;
        cout << "\t" << left << setw(10) << "Value"  << right << setw(16) << group[1].num_c << endl;
        cout << "\t" << left << setw(10) << "Addres" << right << setw(16) << &group[1].num_c << endl;
        cout << "\t" << left << setw(10) << "Offset" << right << setw(16) << offsetof(Student, num_c) << endl;
        cout << "\t" << left << setw(10) << "Size"   << right << setw(16) << sizeof(group[1].num_c) << endl;
        cout << "\t" << left << setw(10) << "Hex"    << endl; print_in_hex(&(group[1].num_c), sizeof(group[1].num_c)); cout << endl;
        cout << "\t" << left << setw(10) << "Binary" << endl; print_in_binary(&(group[1].num_c), sizeof(group[1].num_c)); cout << endl;
    cout << "groupHead:" << endl;
        cout << "\t" << left << setw(10) << "Value"  << right << setw(16) << group[1].groupHead << endl;
        cout << "\t" << left << setw(10) << "Addres" << right << setw(16) << &(group[1].groupHead) << endl;
        cout << "\t" << left << setw(10) << "Offset" << right << setw(16) << offsetof(Student, groupHead) << endl;
        cout << "\t" << left << setw(10) << "Size"   << right << setw(16) << sizeof(group[1].groupHead) << endl;
        cout << "\t" << left << setw(10) << "Hex"    << endl; print_in_hex(&(group[1].groupHead), sizeof(group[1].groupHead)); cout << endl;
        cout << "\t" << left << setw(10) << "Binary" << endl; print_in_binary(&(group[1].groupHead), sizeof(group[1].groupHead)); cout << endl;

    cout << endl << "The whole array in one piece" << endl;

    print_in_hex(group, sizeof(group));

    cout << endl << endl << "The array, element by element" << endl;

    for (int i = 0; i < 3; ++i)
    {
        print_in_hex(&(group[i]), sizeof(Student));
        cout << endl << endl;
    }
}

void partIV(){

    char file_name[256];

    cout << "Enter file name: ";
    cin >> file_name;

    if((strchr(file_name,'*') != NULL)||(strchr(file_name,'"') != NULL) ||
        (strchr(file_name,'<') != NULL)||(strchr(file_name,'>') != NULL)||
        (strchr(file_name,'?') != NULL)||(strchr(file_name,'|') != NULL)){
        puts("Error! Incorrect file name");
        return;
    }


    if((strchr(file_name,':') != NULL)&& 
      (!(((strchr(file_name,':') - file_name + 1) == 2)&& 
      (((strchr(file_name,'\\') - file_name + 1) == 3)|| 
       isalpha(1) != 0)))){
        cout << "Error! Incorrect file name";
    } 
=======
}

int main(){

    cout << "Main menu. Choose subprogram:" << endl
         << "2 -- Bitwise calcucator" << endl
         << "3 -- Data allocation" << endl
         << "4 -- Text search in file" << endl;
    int c;
    cin >> c;
    switch(c)
    {
        case 2:
            partII();
            break;
        case 3:
            partIII();
            break;
        case 4:
            partIV();
            break;
        default:
            cout << "Wrong entry" << endl;
    }
    return 0;
}
>>>>>>> 9fdae3fe75f85bb4abe9c8eebcf0630d3add5674

    int a = strlen(file_name);

    char * lastDotPnt = strrchr(file_name, '.');

    if(lastDotPnt != NULL){
        if(strcoll(lastDotPnt, ".txt")!=0){
            strcat(file_name, ".txt");
        }
    }
    else
    {
        strcat(file_name, ".txt");
    }
     
    ifstream ifs(file_name);
    int file_length = 0;

    if (ifs) {
        ifs.seekg (0, ifs.end);
        file_length = ifs.tellg();
        ifs.seekg (0, ifs.beg); 
        char * file_content = new char[file_length];
        ifs.read(file_content, file_length);
        ifs.close();

        cout << "Enter a string to search for (up to 255 characters):" << endl;
        char substr[256];
        cin >> substr;

        int count = 0;
        const char *tmp = file_content;
        while(tmp = strstr(tmp, substr))
        {
           count++;
           tmp++;
        }
        cout << "The string \"" << substr << "\" occures in the file " << file_name << " "  << count << " times." << endl;
        delete[] file_content;
        delete[] tmp;
    }

    delete[] lastDotPnt;
}

int main(){
    cout << "Main menu. Choose subprogram:" << endl
         << "2 -- Bitwise calcucator" << endl
         << "3 -- Data allocation" << endl
         << "4 -- Text search in file" << endl;
    int c;
    cin >> c;
    switch(c)
    {
        case 2:
            partII();
            break;
        case 3:
            partIII();
            break;
        case 4:
            partIV();
            break;
        default:
            cout << "Wrong entry" << endl;
    }
    return 0;
}