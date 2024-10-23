#include "app.h"
#include <format>
#include <ostream>
#include <iomanip>

namespace vsite::oop::v1
{
/*
* function implementations
*/
    std::string to_hex(int a) {
        return std::format("{:X}", a);
    }
    std::string to_exp(double b) {
        return std::format("{:.2e}", b);
    }
    void mult_table(int c, std::ostream& os) {
        
        if (c > 0 && c <= 20) {
            
            for (int j = 0; j <= c; j++) {
                if (j == c) {
                    os << j;
                    break;
                }
                os << j << std::setw(4);
            }
            os << '\n';

            for (int i = 1; i <= c; i++) {
                os << i;
                for (int j = 1; j <= c; j++) {
                    os << std::setw(4) << i * j;
                }
                os << '\n';
            }
        }
        return;
    }
        

    
    

} // namespace

