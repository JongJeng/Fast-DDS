#!/bin/bash

colcon build --base-paths src-2.6.x --packages-up-to fastrtps \
             --cmake-args \
               -DCMAKE_BUILD_TYPE="Debug" \
               -DCMAKE_EXPORT_COMPILE_COMMANDS=1 \
               -Wno-deprecated -Wno-dev \
            #    -DCMAKE_TOOLCHAIN_FILE=$cmake_toolchainfile \