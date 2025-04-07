    #include <iostream>

    bool is_power_of_2(int num);
    bool is_power_of_2_no_loop(int num);
    void test();


int main(){
    test();
    return 0;
}

bool is_power_of_2(int num){
    // keep dividing num by 2 until either 1 or non-divisible
    while(num != 1){
        if(num == 1){ // divisible by 2
            return true;
        }
        if(num % 2 == 0){
            num = num/2;
            continue;
        } else{
            return false;
        }
    }
    return true;
}

bool is_power_of_2_no_loop(int num){
    
    
    //2 : 10
    //4 : 100
    //8 : 1000
    //16 : 10000
    // 10000 & (01111) = 0
    if(num > 0 && (num & (num-1)) == 0){
        return true;
    } else{
        return false;
    }
    
}

void test(){
    int num []={1,2,3,4,6,8,10,16,20,32};
    bool expected[] = {true, true, false, true, false, true,false, true,false,true};
    // test for loop power of two
    std :: cout << "Test for power of two with loop" << std :: endl;
    for(int i=0; i < 10 ; i++){
        bool result = is_power_of_2(num[i]);
        if(result == expected[i]){
            std :: cout << "PASS!" << std :: endl;
        }else{
            std :: cout << "FAIL!" << std :: endl;
        }
    }
    
    std :: cout << "Test for power of two with no loop" << std :: endl;
    
    for(int i=0; i < 10 ; i++){
        bool result = is_power_of_2_no_loop(num[i]);
        if(result == expected[i]){
            std :: cout << "PASS!" << std :: endl;
        }else{
            std :: cout << "FAIL!" << std :: endl;
        }
    }
}