#include <iostream>
namespace ansi {
  template < class CharT, class Traits >
  constexpr
  std::basic_ostream< CharT, Traits > & reset( std::basic_ostream< CharT, Traits > &os )
  {
     return os << "\033[0m";
  }

  template < class CharT, class Traits >
  constexpr
  std::basic_ostream< CharT, Traits > & foreground_black( std::basic_ostream< CharT, Traits > &os )
  {
     return os << "\033[30m";
  }

  template < class CharT, class Traits >
  constexpr
  std::basic_ostream< CharT, Traits > & foreground_red( std::basic_ostream< CharT, Traits > &os )
  {
     return os << "\033[31m";
  }
  ...
 } // ansi
int main(){
  std::cout << ansi::foreground_red << "in red" << ansi::reset << std::endl;
  return 0;
}
