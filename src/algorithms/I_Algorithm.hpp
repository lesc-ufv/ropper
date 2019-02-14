#pragma once
#include <Traits.hpp>

namespace pandr::algorithm {
	template<typename Matrix>
	class I_Algorithm {
		protected:
			Matrix const& matrix;
		public:
			I_Algorithm() = delete;
			I_Algorithm(Matrix const& matrix);
			virtual ~I_Algorithm() = default;
	};

	template<typename Matrix>
	I_Algorithm<Matrix>::I_Algorithm(Matrix const& matrix)
		: matrix(matrix)
	{
		/*
		 * Static Assetions
		 */
		static_assert(pandr::traits::size<Matrix>::value, "Error: The matrix type does not support the 'size' method");
	}
} /* pandr::algorithm namespace */
