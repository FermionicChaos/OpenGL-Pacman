#pragma once
#ifndef INTEGER4_H
#define INTEGER4_H

#include "mconfig.h"

#include "integer.h"

namespace math {

	union integer4 {
		struct {
			integer x, y, z, t;
		};
		struct {
			integer r, g, b, a;
		};
		integer ptr[4];

		integer4();
		~integer4();

#ifdef CS_PLEB_NOTATION
		integer4(integer Arg);
#endif // CS_PLEB_NOTATION
		integer4(integer ArgX, integer ArgY, integer ArgZ, integer ArgT);
		integer4(const integer4& Arg);

#ifdef CS_PLEB_NOTATION
		integer4& operator=(integer Rhs);
#endif // CS_PLEB_NOTATION
		integer4& operator=(const integer4& Rhs);

		integer operator[](integer Index) const;
		integer& operator[](integer Index);

		integer4 operator-() const;
		integer4 operator+(const integer4& Rhs) const;
		integer4 operator-(const integer4& Rhs) const;
		integer operator*(const integer4& Rhs) const;

		integer4& operator+=(const integer4& Rhs);
		integer4& operator-=(const integer4& Rhs);

#ifdef CS_PLEB_NOTATION
		integer4 operator+(integer Rhs) const;
		integer4 operator-(integer Rhs) const;
#endif // CS_PLEB_NOTATION
		integer4 operator*(integer Rhs) const;
		integer4 operator/(integer Rhs) const;

#ifdef CS_PLEB_NOTATION
		integer4& operator+=(integer Rhs);
		integer4& operator-=(integer Rhs);
#endif // CS_PLEB_NOTATION
		integer4& operator*=(integer Rhs);
		integer4& operator/=(integer Rhs);

	};

#ifdef CS_PLEB_NOTATION
	integer4 operator+(integer Lhs, const integer4& Rhs);
	integer4 operator-(integer Lhs, const integer4& Rhs);
#endif // CS_PLEB_NOTATION
	integer4 operator*(integer Lhs, const integer4& Rhs);
#ifdef CS_PLEB_NOTATION
	integer4 operator/(integer Lhs, const integer4& Rhs);
#endif // CS_PLEB_NOTATION

}

#endif // !INTEGER4_H
