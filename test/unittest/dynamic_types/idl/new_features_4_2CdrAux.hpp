// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file new_features_4_2CdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_NEW_FEATURES_4_2CDRAUX_HPP_
#define _FAST_DDS_GENERATED_NEW_FEATURES_4_2CDRAUX_HPP_

#include "new_features_4_2.h"

            constexpr uint32_t bitmodule_BM2_max_cdr_typesize {24UL};
            constexpr uint32_t bitmodule_BM2_max_key_cdr_typesize {0UL};

            constexpr uint32_t NewAliases_max_cdr_typesize {40UL};
            constexpr uint32_t NewAliases_max_key_cdr_typesize {0UL};


            constexpr uint32_t StructTest_max_cdr_typesize {96UL};
            constexpr uint32_t StructTest_max_key_cdr_typesize {0UL};




            constexpr uint32_t bitmodule_BitsetBitmask_max_cdr_typesize {17UL};
            constexpr uint32_t bitmodule_BitsetBitmask_max_key_cdr_typesize {0UL};


namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const NewAliases& data);




eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const bitmodule::BitsetBitmask& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const bitmodule::BM2& data);


eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const StructTest& data);


} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_NEW_FEATURES_4_2CDRAUX_HPP_