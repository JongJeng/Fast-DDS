#!/bin/bash

colcon build --packages-up-to fastrtps \
             --cmake-args \
               -DCMAKE_BUILD_TYPE="Release" \
               -DCMAKE_EXPORT_COMPILE_COMMANDS=1 \
            #  -DCMAKE_TOOLCHAIN_FILE=$cmake_toolchainfile \
