#pragma once

#include "math_common.h"
#include "math_matrix.h"

namespace math {
	class MathObjectType {
		string _name;
		string _desc;

		const UINT _dim;
		UINT* size;

		MathObjectType(const UINT dim) : _dim(dim) {
		}

		MathMatrix(*add)(MathMatrix&, MathMatrix&);
		MathMatrix(*sub)(MathMatrix&, MathMatrix&);
		MathMatrix(*mul)(MathMatrix&, MathMatrix&);
		MathMatrix(*div)(MathMatrix&, MathMatrix&);
		MathMatrix(*pow)(MathMatrix&, MathMatrix&);
	};
}