/// Binary Representation for integers
/// https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=vs-2017
/// unsigned short	2	unsigned short int	0 to 65,535 = 2^16 -1

// Left bit shift (<<)
// source: https://stackoverflow.com/questions/141525/what-are-bitwise-shift-bit-shift-operators-and-how-do-they-work
//Integers are stored, in memory, as a series of bits.
//For example, the number 6 stored as a 32-bit int would be:
//00000000 00000000 00000000 00000110
//Shifting this bit pattern to the left one position (6 << 1) would result in the number 12:
//00000000 00000000 00000000 00001100
//As you can see, the digits have shifted to the left by one position,
//and the last digit on the right is filled with a zero.
//You might also note that shifting left is equivalent to multiplication by powers of 2.
//So 6 << 1 is equivalent to 6 * 2, and 6 << 3 is equivalent to 6 * 8.
//A good optimizing compiler will replace multiplications with shifts when possible.
//
#include<iostream>

void printBinary(unsigned short val);

int main(){

unsigned short inVal;

    int p1 = (1<<5); //left bit shift (definition at the top)
    bool p2 = 32 & (1<<5);
    std::cout<<"Use of << (left bit shift operator)  1<<5:  "<<p1<<std::endl;
    std::cout<<"Boolean value when we evaluate 32 & (1<<5): "<<p2<<std::endl;

    std::cout<<"Enter a number between 0 to 65535: ";
    std::cin>>inVal;
    std::cout<<"Your number in binary is ";
    printBinary(inVal);
    std::cout<<std::endl;

return 0;
}

void printBinary(unsigned short val){
    for(int i = 15; i>=0; i--){
        if(val & (1<<i)){
            std::cout<< "1";
        }else {
            std::cout<<0;
        }
    }
}
