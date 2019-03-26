#include "keither.h"

#include <exception>
#include <iostream>

int main(int argc, char const *argv[])
{
  auto re = divide (10, 0);
  re.join(
    [](int result){std::cout << result << std::endl;},
    [](std::exception e){std::cout << e.what() << std::endl;}
  );
  return 0;
}

neither::Either<int, std::exception> divide(int a, int b){
  if(b == 0){
    return neither::right(std::exception());
  }else{
    return neither::left(a/b);
  }
}
