 #include<iostream>

 int main()
 {
    int arr[10];
    //Reading values of Array's

    std::cout<<"Vlaue of arr[0]"<<arr[0]<<std::endl;
    std::cout<<"Vlaue of arr[1]"<<arr[1]<<std::endl;
    std::cout<<"Vlaue of arr[2]"<<arr[2]<<std::endl;
    std::cout<<"Vlaue of arr[3]"<<arr[3]<<std::endl;
    std::cout<<"Vlaue of arr[4]"<<arr[4]<<std::endl;
    std::cout<<"Vlaue of arr[5]"<<arr[5]<<std::endl;
    std::cout<<"Vlaue of arr[6]"<<arr[6]<<std::endl;
    std::cout<<"Vlaue of arr[7]"<<arr[7]<<std::endl;
    std::cout<<"Vlaue of arr[8]"<<arr[8]<<std::endl;
    std::cout<<"Vlaue of arr[9]"<<arr[9]<<std::endl;

    // Can read looping throug array
    for(size_t i{0};i<10;i++)
    {
        std::cout<<"arr["<<i<<"]"<<arr[i]<<std::endl;
    }
    std::cout<<std::endl;
    //Writing data into array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;
    arr[8] = 90;
    arr[9] = 100;

    std::cout<<"Manually writing data into array"<<std::endl;
    for(size_t i{0};i<10;i++)
    {
         std::cout<<"arr["<<i<<"] = "<<arr[i]<<std::endl;
    }
     std::cout<<std::endl;
    // Writing data with loop
    int arr1[5];
    std::cout<<"Writing data with loop"<<std::endl;
    // Write data
    for(size_t i{0};i<10;i++)
    {
        arr1[i] = i*3;
    }

    // read data
    for(size_t i{0};i<10;i++)
    {
        std::cout<<"arr1["<<i<<"] = "<<arr1[i]<<std::endl;
    }

    // Intialize the array at declaration
    std::cout<<std::endl;
    std::cout<<" Intialize the array at declaration"<<std::endl;
    double arr2[5]{1.5,2.7,3.9,4.4,5.00};
    for(size_t i{0};i<5; i++)
    {
        std::cout<<"arr2["<<i<<"] = "<<arr2[i]<<std::endl;
    }
 
std::cout<<std::endl;
 //Array intialiization :omitting elements

 std::cout<<std::endl;
 std::cout<<"Leaving out some elements un intialized :"<<std::endl;
 int arr3[5]{11,23,12};
 for(size_t i{0}; i<5;i++)
 {
    std::cout<<"arr3["<<i<<"] = "<<arr3[i]<<std::endl;
 }

    std::cout<<std::endl;
    std::cout<<"Array Declartion omiit size"<<std::endl;

    int arr4[]{10,20,30,40,50,60};
    for (auto value:arr4)
    {
        std::cout<<"value: "<<value<<std::endl;
    }

    std::cout<<std::endl;
    //Constant Array
    std::cout<<"Constant Array's can't be modified"<<std::endl;
    const int arr5[]{10,20,30};
    for(auto contv:arr5)
    {
        std::cout<<"Constant values: "<<contv<<std::endl;
    }

    //arr5[1] = 70;
    std::cout<<"Value of Arr5[1]: "<<arr5[1]<<std::endl;

    std::cout<<std::endl;
    //operation on data stored in Array

    int sum{0};
    for(auto elements: arr5)
    {
        sum += elements;
    }
    std::cout<<"Arr of Sum: "<<sum<<std::endl;
    std::cout<<std::endl;
    //std::size
    std::cout<<"We can get the Size of Array with std::size:"<<std::endl;
    int size[]{1,2,3,4,5,6,7,8,9,02,3,3};

    std::cout<<"Size of all array size: "<<std::size(size)<<std::endl;

    for(size_t i{0};i<std::size(size);i++)
    {
        std::cout<<"size["<<i<<"] = "<<size[i]<<std::endl;

    }

   std::cout<<std::endl;
   // Array of Characters
   std::cout<<"Array of Characters :"<<std::endl;

    char message[]{'R','a','j','e','s','h','\0'};
    std::cout<<"Value of caharacter: "<<message<<std::endl;
    std::cout<<" Size Value of caharacter: "<<std::size(message)<<std::endl;

    for(auto ch:message)
    {
        std::cout<<"ch message: "<<ch<<std::endl;
    }
    message[0] = 'L';
    for(auto ch:message)
      {
        std::cout<<"ch message: "<<ch<<std::endl;
      }
      std::cout<<std::endl;
      //Auto filled null character
      std::cout<<"Auot Filled null character of message:"<<std::endl;
      char message1[7]{'R','a','j','e','s','h'};
      std::cout<<"Size of message1 "<<std::size(message1)<<std::endl;

      std::cout<<std::endl;
      //Literal C-String
      std::cout<<"Literal C - String"<<std::endl;

      char message2[]{"Rajeh Want to Job"};
      std::cout<<"Size of message2: "<<std::size(message2)<<std::endl;
      std::cout<<" message2 value: "<<message2<<std::endl;


      std::cout<<std::endl;
      //Array of char are special

      std::cout<<"Can't direct print arrays other than char"<<std::endl;
      int arr6[]{10,39,58,59,9};
      std::cout<<"Arr6 values: "<<arr6<<std::endl;
      std::cout<<std::endl;
      // Array bounds
     std::cout<<"Array bounds: "<<std::endl;
     std::cout<<"Value of Arr6[7]:"<<arr6[7]<<std::endl;
     arr6[7] = 100;
     std::cout<<"Value of Arr6[7]: after intialize "<<arr6[7]<<std::endl;
    return 0;
 }