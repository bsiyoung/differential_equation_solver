#pragma once

#include "math_object_type.h"

#include <string>

using namespace std;

namespace math {
	class MathObject {
		string latex_expr;
		MathObjectType* type;

		MathMatrix value;
	};
}