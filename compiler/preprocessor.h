#pragma once
#include "program.h"

/*

����#include�����ǵݹ����

*/

namespace compiler
{
	class preprocessor
	{
	public:
		explicit preprocessor(program_ptr prog);

		program_ptr prog;

		program_ptr analyze();
	};
}
