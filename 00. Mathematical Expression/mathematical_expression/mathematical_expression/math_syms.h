#pragma once

#include "math_object.h"

#include <string>
#include <map>

using  namespace std;

namespace math {
	class SymbolManager {
		// Map Containing Symbol Objects (Functions, Constants and Variables)
		map<string, MathObject> syms;

		// Add, Remove and Find Symbol
		void add(string sym_str, MathObject obj);
		void remove(string sym_str);
		MathObject* find(string sym_str);
	};
}