#include<iostream>

int main()
{
    //Intialize with new upon pointer declarations
 std::cout<<"<----Intialize with new upon pointer declarations---->"<<std::endl;
   int *p_int4{new int};//Memory with junk values
   int *p_int5{new int(300)};
   int *p_int6{new int{400}};

   std::cout<<"Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<*p_int4<<std::endl;
   std::cout<<"Address of p_int5: "<<p_int5<<"  Value of p_int5: "<<*p_int5<<std::endl;
   std::cout<<"Address of p_int6: "<<p_int6<<"  Value of p_int6: "<<*p_int6<<std::endl;

   // releasing memory
    delete p_int4;
    p_int4 = nullptr;
    delete p_int5;
    p_int5 = nullptr;
    delete p_int6;
    p_int6 = nullptr;

   std::cout<<std::endl;
   std::cout<<"<----After memory releaing-->"<<std::endl;
   std::cout<<"Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<*p_int4<<std::endl;
   std::cout<<"Address of p_int5: "<<p_int5<<"  Value of p_int5: "<<*p_int5<<std::endl;
   std::cout<<"Address of p_int6: "<<p_int6<<"  Value of p_int6: "<<*p_int6<<std::endl;

   std::cout<<std::endl;
   std::cout<<"<----Re use varaibles After memory releaing-->"<<std::endl;
   p_int4 = new int{500};
   std::cout<<"Resue varaibles after memory release -> Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<*p_int4<<std::endl;
   delete p_int4;
   p_int4 = nullptr;
   std::cout<<"Resue varaibles after memory release -> Address of p_int4: "<<p_int4<<"  Value of p_int4: "<<*p_int4<<std::endl;

// Dangling pointers
   std::cout<<std::endl;
   std::cout<<"<---Dangling pointers---->"<<std::endl;
   int *p_int7{new int(600)};
   int *p_int8 = p_int7;
   std::cout<<"Address of p_int7: "<<p_int7<<"  Value of p_int7: "<<*p_int7<<std::endl;
   if(p_int7 != nullptr){
        std::cout<<"Address of p_int8: "<<p_int8<<"  Value of p_int8: "<<*p_int8<<std::endl;
   }
   else{
    std::cout<<"Trying to use invalid pointers:"<<std::endl;
   }

   delete p_int7;
   p_int7 = nullptr;
   if(p_int7 != nullptr)
   {
   std::cout<<"After delete of p_int7 -->Address of p_int8: "<<p_int8<<"  Value of p_int8: "<<*p_int8<<std::endl;
   }
   else{
    std::cout<<"Trying to Use invalid Pointers:"<<std::endl;
   }

   std::cout<<std::endl;
   // when New fails
   //std::exception
   //std::nothrow
   std::cout<<"<-----When new failes------>"<<std::endl;
   //int *p_lots_arr{new int[1000000000000]};  // it gives error like a bad allocation
  std::cout<<"<---using std::exception-->"<<std::endl;
  for(size_t i{0};i<100;i++)
   {
    try{
         //std::cout<<"Value of lot of Array:"<<p_lots_arr[i]<<std::endl;
         int *p_lots_arr{new int[1000000000000]};
    }
    catch(std::exception& e)
    {
        std::cout<<"Caught exception ourselves:"<<e.what()<<std::endl;
    }
    
   }

   //std::nothrow
   std::cout<<std::endl;
    std::cout<<"<---using std::nothrow-->"<<std::endl;
   for(size_t i{0};i<100;i++)
   {
      int *data = new(std::nothrow)int [1000000000000];
      if(data != nullptr)
      {
        std::cout<<"Memory Allocation is successed"<<std::endl;
      }
      else{
        std::cout<<"Memory allocation is failed"<<std::endl;
      }
   }

   //NullPtr Safety

   std::cout<<std::endl;
   std::cout<<"<---NullPtr Safety---->"<<std::endl;
   int *p_int9{new int(10)};
   if(p_int9 != nullptr)
   {
    std::cout<<"Valid Address of p_int9:"<<p_int9<<std::endl;
   }
   else{
         std::cout<<"Not valid Address pointer"<<std::endl;
   }

   //Compact nullptr check
   std::cout<<std::endl;
   std::cout<<"<----Compact nullptr check--->"<<std::endl;
   if(p_int9)
   {
    std::cout<<"p_int9 pointing to valid address:"<<p_int9<<std::endl;
   }
   else{
    std::cout<<"p_int9 pointing to inavalid address point"<<std::endl;
   }

   std::cout<<"Program is going to end very well"<<std::endl;

   

    return 0;
}