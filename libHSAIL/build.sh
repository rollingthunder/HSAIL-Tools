#!/bin/bash
if [[ -d build ]]; then
	rm -rf build
fi

mkdir build
cd build
cmake \
	-GNinja \
	-DCMAKE_PREFIX_PATH="~/hsa/llvm/build_Ninja" \
	-DCMAKE_INSTALL_PREFIX="~/" \
	-DLIB_SUFFIX="64" \
    ..
ninja
ninja install
