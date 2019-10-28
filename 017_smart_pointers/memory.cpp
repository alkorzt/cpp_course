#include <iostream>
#include <memory>

int main(){
  std::cout << "unique_ptr" << std::endl;
  std::unique_ptr<int> a(new int(5));
  std::unique_ptr<int> b(new int(8));

//b = a; запещено
  b = std::move(a);  
  std::cout << a.get() << " " << b.get() << std::endl;

  if(a.get()) std::cout << "a = " << *a << std::endl;
  if(b.get()) std::cout << "b = " << *b << std::endl;

  std::cout << "shared_ptr" << std::endl;
  int* ptr = new int(100);
  std::shared_ptr<int> sa = std::make_shared<int>(*ptr);
  delete ptr;
  {
    std::shared_ptr<int> sb = sa;
    std::cout << "sa = " << *sa << " sb = " << *sb << std::endl;
    *sb = 9;
    std::cout << "sa = " << *sa << " sb = " << *sb << std::endl;
    std::cout << "count  = " << sa.use_count() << std::endl;
  }
  std::cout << "sa = " << *sa << std::endl;
  std::cout << "count  = " << sa.use_count() << std::endl;
}
