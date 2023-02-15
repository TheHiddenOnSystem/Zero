/**
 * @brief Primary module interface for the iterators hierarchies,
 * implementations and concepts
 */

export module iterator;

export import :concepts;

export import :input_iterator;
export import :iterator_facade;

export import :legacy_iterator;
export import :legacy_input_iterator;

import std;
import typedefs;


/// ----------------- compile time tests ----------------------///
static_assert(
    zero::iterator::concepts::input_iterator<
        zero::iterator::legacy::input_iter<int>
    >, 
    "Failed to create the input iterator"
);
static_assert(
    std::input_iterator<
        zero::iterator::legacy::input_iter<int>
    >, 
    "zero::iterator::input_iter<T> isn't an std::input_iterator"
);
