#include "lru_cache.cpp"
#include <gtest/gtest.h>

// Test the basic functionality of LRUCache
TEST(LRUCacheTest, BasicTest) {
  
    LRUCache cache(3); // Create a cache with capacity 3
    cache.put(1, 1);
    cache.put(2, 2);
    cache.put(3, 3);

    // Cache: {3->3, 2->2, 1->1}

    // Check if the elements are retrieved correctly
    EXPECT_EQ(cache.get(1), 1); // Expected: Cache hit, move 1 to the front
    EXPECT_EQ(cache.get(2), 2); // Expected: Cache hit, move 2 to the front
    EXPECT_EQ(cache.get(3), 3); // Expected: Cache hit, move 3 to the front

    // Cache: {3->3, 2->2, 1->1}

    cache.put(4, 4); // Add a new element, which will remove the least recently used (LRU) element 3

    // Cache: {4->4, 3->3, 2->2}

    // Check if the removed element is no longer present in the cache
    EXPECT_EQ(cache.get(1), -1); // Expected: Cache miss

    // Check if the other elements are still accessible
    EXPECT_EQ(cache.get(3), 3); // Expected: Cache hit, move 3 to the front
    EXPECT_EQ(cache.get(2), 2); // Expected: Cache hit, move 2 to the front
    EXPECT_EQ(cache.get(4), 4); // Expected: Cache hit, move 4 to the front
}

// Test case for LRU cache with capacity 1
TEST(LRUCacheTest, CapacityOneTest) {
    LRUCache cache(1); // Create a cache with capacity 1
    cache.put(1, 100); // Add an element

    // Check if the element is present in the cache
    EXPECT_EQ(cache.get(1), 100); // Expected: Cache hit

    cache.put(2, 200); // Add a new element, which will remove the least recently used (LRU) element 1

    // Check if the removed element is no longer present in the cache
    EXPECT_EQ(cache.get(1), -1); // Expected: Cache miss

    // Check if the new element is present in the cache
    EXPECT_EQ(cache.get(2), 200); // Expected: Cache hit
}