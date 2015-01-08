#include "mex_stuff.h"
#include <iostream>
#include <vector>

void mex_function(const std::vector<double>& x, const std::vector<double>& y, std::vector<double>& sum) {
    if (x.size() < y.size()) {
        std::cout << "Need x size to be equal or larger to y size\n";
        return;
    }
    for (int i=0;i<y.size();i++) {
        sum.push_back( x[i] + y[i] );
    }
}

using namespace mex_binding;
using namespace std;

#include "mex_wrap.cxx"