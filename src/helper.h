#ifndef my_help_func
#define my_help_func

#include<set>
#include<algorithm>
#include<cmath>

using namespace std;

double get_median(const multiset<double>&, const multiset<double, std::greater<double> >&);
void insert_element(multiset<double>&, multiset<double, std::greater<double> >&, double);
void remove_element(multiset<double>&, multiset<double, std::greater<double> >&, double);

extern double Linear(double x);
extern double Const(double x);
extern double Quadratic(double x);

class EDMResult {
public:
    int best_loc;
    double best_stat;
    EDMResult(int, double);
};

#endif
