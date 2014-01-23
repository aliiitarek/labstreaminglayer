// Boost.Range library
//
//  Copyright Thorsten Ottosen 2006. Use, modification and
//  distribution is subject to the Boost Software License, Version
//  1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.lslboost.org/LICENSE_1_0.txt)
//
// For more information, see http://www.lslboost.org/libs/range/
//

#ifndef BOOST_RANGE_AS_ARRAY_HPP
#define BOOST_RANGE_AS_ARRAY_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

#include <lslboost/range/iterator_range.hpp>
#include <lslboost/range/detail/str_types.hpp>

namespace lslboost
{

    template< class R >
    inline iterator_range< BOOST_DEDUCED_TYPENAME range_iterator<R>::type > 
    as_array( R& r )
    {
        return lslboost::make_iterator_range( r );
    }

#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING

    template< class Range >
    inline lslboost::iterator_range< BOOST_DEDUCED_TYPENAME range_iterator<const Range>::type > 
    as_array( const Range& r )
    {
        return lslboost::make_iterator_range( r );
    }
    
#endif
    
}

#endif

