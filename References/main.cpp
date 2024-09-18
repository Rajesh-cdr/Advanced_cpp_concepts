#include<iostream>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    // Declaring and using references
    std::cout<<std::endl;
    std::cout<<"<-----Declaring and using references----->"<<std::endl;

    int value{10};
    double value2{1.5};

    int& reference_of_vlaue1{value};
    double& reference_of_vlaue2{value2};

    std::cout<<"Value of int: "<<value<<"  referneces of int :"<<&value<<std::endl;
    std::cout<<"Value of int:size: "<<sizeof(value)<<"  referneces of int:size :"<<sizeof(&value)<<std::endl;
    std::cout<<"Value of reference_of_vlaue1: "<<reference_of_vlaue1<<"  references of reference_of_vlaue1: "<<&reference_of_vlaue1<<std::endl;
    std::cout<<"Value of reference_of_vlaue1 size: "<<sizeof(reference_of_vlaue1)<<"  references of reference_of_vlaue1:size "<<sizeof(&reference_of_vlaue1)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Value of double: "<<value2<<"  referneces of double :"<<&value2<<std::endl;
    std::cout<<"Value of double:size: "<<sizeof(value2)<<"  referneces of double:size :"<<sizeof(&value2)<<std::endl;
    std::cout<<"Value of reference_of_vlaue2: "<<reference_of_vlaue2<<"  references of reference_of_vlaue2: "<<&reference_of_vlaue2<<std::endl;
    std::cout<<"Value of reference_of_vlaue2 size: "<<sizeof(reference_of_vlaue2)<<"  references of reference_of_vlaue2:size "<<sizeof(&reference_of_vlaue2)<<std::endl;
    std::cout<<std::endl;
    std::cout<<"======================================================"<<std::endl;

    value = 100;
    value2 = 200.45;

     std::cout<<"Value of int: "<<value<<"  referneces of int :"<<&value<<std::endl;
    std::cout<<"Value of int:size: "<<sizeof(value)<<"  referneces of int:size :"<<sizeof(&value)<<std::endl;
    std::cout<<"Value of reference_of_vlaue1: "<<reference_of_vlaue1<<"  references of reference_of_vlaue1: "<<&reference_of_vlaue1<<std::endl;
    std::cout<<"Value of reference_of_vlaue1 size: "<<sizeof(reference_of_vlaue1)<<"  references of reference_of_vlaue1:size "<<sizeof(&reference_of_vlaue1)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Value of double: "<<value2<<"  referneces of double :"<<&value2<<std::endl;
    std::cout<<"Value of double:size: "<<sizeof(value2)<<"  referneces of double:size :"<<sizeof(&value2)<<std::endl;
    std::cout<<"Value of reference_of_vlaue2: "<<reference_of_vlaue2<<"  references of reference_of_vlaue2: "<<&reference_of_vlaue2<<std::endl;
    std::cout<<"Value of reference_of_vlaue2 size: "<<sizeof(reference_of_vlaue2)<<"  references of reference_of_vlaue2:size "<<sizeof(&reference_of_vlaue2)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"==================================================="<<std::endl;
    //Modify data through reference

    std::cout<<"<----Modify data through references-----> "<<std::endl;

    reference_of_vlaue1 = 300;
    reference_of_vlaue2 = 400.56;

     std::cout<<"Value of int: "<<value<<"  referneces of int :"<<&value<<std::endl;
    std::cout<<"Value of int:size: "<<sizeof(value)<<"  referneces of int:size :"<<sizeof(&value)<<std::endl;
    std::cout<<"Value of reference_of_vlaue1: "<<reference_of_vlaue1<<"  references of reference_of_vlaue1: "<<&reference_of_vlaue1<<std::endl;
    std::cout<<"Value of reference_of_vlaue1 size: "<<sizeof(reference_of_vlaue1)<<"  references of reference_of_vlaue1:size "<<sizeof(&reference_of_vlaue1)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Value of double: "<<value2<<"  referneces of double :"<<&value2<<std::endl;
    std::cout<<"Value of double:size: "<<sizeof(value2)<<"  referneces of double:size :"<<sizeof(&value2)<<std::endl;
    std::cout<<"Value of reference_of_vlaue2: "<<reference_of_vlaue2<<"  references of reference_of_vlaue2: "<<&reference_of_vlaue2<<std::endl;
    std::cout<<"Value of reference_of_vlaue2 size: "<<sizeof(reference_of_vlaue2)<<"  references of reference_of_vlaue2:size "<<sizeof(&reference_of_vlaue2)<<std::endl;
    
    std::cout<<"Size of int: "<<sizeof(int)<<" Size of &int: "<<sizeof(int&)<<std::endl;
   std::cout<<std::endl;
   std::cout<<"=============================================="<<std::endl;
//  Can't make reference refer to the something else
    std::cout<<"<------Can't make reference refer to the something else------>"<<std::endl;

    double dbl_normal{10.56};
    double & double_ref{dbl_normal};
    std::cout<<"Value of dbl_normal: "<<dbl_normal<<"  value of double_ref: "<<double_ref<<std::endl;
    double other_double{200.46};
    double_ref = other_double;
    std::cout<<"Value of dbl_normal: "<<dbl_normal<<"  value of double_ref: "<<double_ref<<" Value of other double value: "<<other_double<<std::endl;
    std::cout<<std::endl;
    dbl_normal = 500.00;
    std::cout<<"Value of dbl_normal: "<<dbl_normal<<"  value of double_ref: "<<double_ref<<" Value of other double value: "<<other_double<<std::endl;
    std::cout<<std::endl;

    std::cout<<"=================================="<<std::endl;
    //Pointer can point somewhere else
    std::cout<<"<--------Pointer can point somewhere else----->"<<std::endl;
    //double_ref = 600.67;
    double* p_double_value{&other_double};
    std::cout<<"Value of dbl_normal: "<<dbl_normal<<"  value of double_ref: "<<*p_double_value<<" Value of other double value: "<<other_double<<std::endl;
    *p_double_value = 79.00;
    std::cout<<"Value of dbl_normal: "<<dbl_normal<<"  value of double_ref: "<<*p_double_value<<" Value of other double value: "<<other_double<<std::endl;


    std::cout<<std::endl;
    //const pointer
    std::cout<<"<----const pointers--->"<<std::endl;

    int age{10};
    int num{20};
   int *const constref{&age};
   //constref = &num;

    std::cout<<"value of age: "<<age<<"  address of age"<<&age<<std::endl;
    std::cout<<"value constref: "<<*constref<<" address of constref: "<<&constref<<std::endl;

    //*constref++;
    std::cout<<"value of age: "<<age<<"  address of age"<<&age<<std::endl;
    std::cout<<"value constref: "<<*constref<<" address of constref: "<<&constref<<std::endl;

    return 0;
}