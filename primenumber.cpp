#include <iostream>

bool isprimenumber(int num);
void test();

int main(){
    test();
}

bool isprimenumber(int num){
    // 1 and 0 arent prime numbers
    if(num <= 1){
        return false;
    }
    // 2 is the only even number to be a prime number
    if(num == 2){
        return true;
    }
    // any even number other than 2 is not a prime number
    if(num%2 == 0){
        return false;
    }
    // loops through all the odd number to see if num is a prime number
    for(int i = 3; i*i <= num; i+=2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

void test(){
    int nums[] = {1,2,3,4,5,9,11,13,16,17};
    bool expected[] = {false, true, true,false,true,false,true,true,false,true};

    for(int i=0; i<10; i++){
        bool result = isprimenumber(nums[i]);
        if(result == expected[i]){
            std :: cout << "PASS!" << std :: endl;
        }else{
            std :: cout << "FAIL!" << std :: endl;
        }
    }

}