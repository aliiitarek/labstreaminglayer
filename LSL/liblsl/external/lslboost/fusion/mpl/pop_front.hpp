/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.lslboost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_POP_FRONT_10022005_1800)
#define FUSION_POP_FRONT_10022005_1800

#include <lslboost/mpl/pop_front.hpp>
#include <lslboost/fusion/support/tag_of.hpp>
#include <lslboost/fusion/algorithm/transformation/pop_front.hpp>
#include <lslboost/fusion/sequence/convert.hpp>

namespace lslboost { namespace mpl
{
    template <typename Tag>
    struct pop_front_impl;

    template <>
    struct pop_front_impl<fusion::fusion_sequence_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename
                fusion::result_of::pop_front<Sequence>::type
            result;

            typedef typename
                fusion::result_of::convert<
                    typename fusion::detail::tag_of<Sequence>::type, result>::type
            type;
        };
    };
}}

#endif

