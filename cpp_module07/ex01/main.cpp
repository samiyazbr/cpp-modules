#include "iter.hpp"

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?

  iter(tab, 5, print<int> );

  return 0;
}