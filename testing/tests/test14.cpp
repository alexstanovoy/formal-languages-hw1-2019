#include <cassert>
#include "solver.hpp"

int main() {
    assert(solve("aa.a.aa.a.a.a.+*", 'a', 14) == 14);
}
