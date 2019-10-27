#include <iostream>

namespace mylib {
    namespace a {
        namespace b {
            namespace c {
                struct Test_struct {
                    int x;
                };
            }
        }
    }
}

int main(){
    using mx = mylib::a::b::c::Test_struct;
    mx mx_st;
    mx_st.x = 42;

    std::cout << mx_st.x << std::endl;
}
