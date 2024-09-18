#include<iostream>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    //Declaring and using pointers

    std::cout<<"----Declaring and using pointers-----"<<std::endl;
    int *p_number{};
    double *p_fractional_number{};

    //Explicitly intialize the nullptr
    
    std::cout<<std::endl;
    std::cout<<"-----Explicitly intialize the nullptr-----"<<std::endl;
    int *p_number1{nullptr};
    double *p_fractional_number1{nullptr};

    //All poinetrs have the same size
    std::cout<<std::endl;
    std::cout<<"----All pointers have the same size-----"<<std::endl;

    std::cout<<"Size of number pointer: "<<sizeof(p_number)<<std::endl;
    std::cout<<"size of pointer integer: "<<sizeof(int*)<<std::endl;
    std::cout<<"Size of p_fractional_number pointer :"<<sizeof(p_fractional_number)<<std::endl;
    std::cout<<"size of double pointer :"<<sizeof(double*)<<std::endl;
    std::cout<<std::endl;

    //Assigning data to pointer variables

    std::cout<<"----Assigning data to pointers variables---"<<std::endl;
    int int_var{40};
    int *p_int{&int_var};
    std::cout<<"INT_VAR: "<<int_var<<std::endl;
    std::cout<<"Address of p_int: "<<p_int<<std::endl;

    //Changing the address stored in pointer any time
    std::cout<<std::endl;
    std::cout<<"----Changing the address stored in pointer any time----"<<std::endl;

    int int_var1{50};
    p_int = &int_var1;
    std::cout<<"Address of p_int: "<<p_int<<std::endl;

    // Pointers only stores the type for which it was declared
    std::cout<<std::endl;
    std::cout<<"---Pointers only stores the type for which it was declared----"<<std::endl;
    int *p_int1{nullptr};
    double double_var{30};
   // p_int1 = &double_var;//it will give error
    std::cout<<"value of double_var: "<<double_var<<std::endl;
    std::cout<<"Address of p_int1: "<<p_int<<std::endl;

    //Dereferencing a pointer
    std::cout<<std::endl;
    std::cout<<"---Dereferencing a pointers---"<<std::endl;

    int int_var2{50};
    int *p_int2 = &int_var2;
    std::cout<<"value of int_var2: "<<int_var2<<std::endl;
    std::cout<<"value of p_int: "<<*p_int2<<std::endl;

    //Declaring pointers to char
    std::cout<<std::endl;
    std::cout<<"--Declaring pointers to char---"<<std::endl;
    char char_var{'R'};
    char *p_char = &char_var;
    std::cout<<"Address of p_char: "<<p_char<<std::endl;
    std::cout<<"value of p_char :"<<*p_char<<std::endl;
    // modified char
    std::cout<<std::endl;
    char char_var1{'A'};
    p_char = &char_var1;
    std::cout<<"Address of p_char: "<<p_char<<std::endl;
    std::cout<<"value of p_char :"<<*p_char<<std::endl;

    std::cout<<std::endl;
    //c-string literals
    std::cout<<"<----C-string literals--->"<<std::endl;
    const char *p_message{"Hello World"};// will get error without const char
    std::cout<<"Address of p_message: "<<p_message<<std::endl;
    std::cout<<"Value of p_message: "<<*p_message<<std::endl;

    //Modify the message
    //p_message = 'B'; compiler error
    std::cout<<"Value of message after modify: "<<*p_message<<std::endl;
    std::cout<<std::endl;

    //Can modify the pure array intialize with string literals
    std::cout<<"<---Allow user modify the string--->"<<std::endl;
    char p_message1[]{"Hello There"};
    std::cout<<"Value of Message1: "<<p_message1<<std::endl;
    p_message1[0] = 'T';
    std::cout<<"value of message1 after the modify: "<<p_message1<<std::endl;

    std::cout<<std::endl;
    //life time through scope mechanism
    std::cout<<"<--life time through scope mechanism--->"<<std::endl;
    {
        int life_time_var{100};
        int *p_life_time_var = new int{20};// dynamic memory allocation
        std::cout<<"Life time varaible inside scope mechanism:"<<life_time_var<<std::endl;
        std::cout<<"Pointer Life time varaible inside scope mechanism:"<<*p_life_time_var<<std::endl;
    }
   // std::cout<<"Life time varaible after scope mechanism:"<<life_time_var<<std::endl;//it will give error
   //std::cout<<"Pointer Life time varaible after scope mechanism:"<<p_life_time_var<<std::endl;

   std::cout<<std::endl;
   //Releasing and resetting varaibles
   std::cout<<"<----Releasing and resetting varaibles--->"<<std::endl;

   int *p_int3{nullptr};
   p_int3 = new int{200};
   std::cout<<"Address of p_int3: "<<p_int3<<"   value of p_int3: "<<*p_int3<<std::endl;
   delete p_int3;
   p_int3 = nullptr;
   std::cout<<"After releasing the memory:"<<std::endl;
   std::cout<<"Address of p_int3: "<<p_int3<<"  value of p_int3: "<<*p_int3<<std::endl;

   std::cout<<std::endl;
   //Intialize with new upon pointer declarations
   std::cout<<"<----Intialize with new upon pointer declarations---->"<<std::endl;
   int *p_int4{new int};//Memory with junk values
   int *p_int5{new int(300)};
   int *p_int6{new int{400}};

   std::cout<<"Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<p_int4<<std::endl;
   std::cout<<"Address of p_int5: "<<p_int5<<"  Value of p_int5: "<<p_int5<<std::endl;
   std::cout<<"Address of p_int6: "<<p_int6<<"  Value of p_int6: "<<p_int6<<std::endl;

   // releasing memory
    delete p_int4;
    p_int4 = nullptr;
    delete p_int5;
    p_int5 = nullptr;
    delete p_int6;
    p_int6 = nullptr;

   std::cout<<std::endl;
   std::cout<<"<----After memory releaing-->"<<std::endl;
   std::cout<<"Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<p_int4<<std::endl;
   std::cout<<"Address of p_int5: "<<p_int5<<"  Value of p_int5: "<<p_int5<<std::endl;
   std::cout<<"Address of p_int6: "<<p_int6<<"  Value of p_int6: "<<p_int6<<std::endl;

   std::cout<<std::endl;
   std::cout<<"<----Re use varaibles After memory releaing-->"<<std::endl;
   //p_int4 = new int{500};
   //std::cout<<"Resue varaibles after memory release -> Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<p_int4<<std::endl;

    return 0;


}