#include "../stack/stack.h"

#include "gtest.h"

TEST(Stack, can_create_bitfield_with_positive_length)
{
  ASSERT_NO_THROW(Stack <int> bf(3));
}

