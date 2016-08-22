#pragma once

namespace llvm
{
	class Module;
}

namespace dev
{
namespace ele
{
namespace jit
{

bool optimize(llvm::Module& _module);

bool prepare(llvm::Module& _module);

}
}
}
