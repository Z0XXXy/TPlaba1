#include "pch.h"
#include "MathLibrary.h"
#include <vector>
#include <set>
using namespace std;
unsigned long long number_of_numbers(std::vector<int> v) {
	set<int> s;
	for (int i = 0; i < v.size(); i++) {
		s.insert(v[i]);
	}
	return s.size();
}