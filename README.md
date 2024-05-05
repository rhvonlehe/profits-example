# profits-example
Based on a code screen

The function `profits` takes a vector of prices corresponding to the stock price of a given day. Day 0 is the 0 index of the vector, day 1 the 1 index, etc.
The return value should be the maximum profit that can be made by buying on any given day and selling on a day *after* than day given the prices in the vector.

I created a helper function called `generate_vec` to fill arbitrary-sized vectors with random numbers. In this case the hard-coded range of random numbers is 1 to 52
but that could easily be changed or parameterized.

The function should run reasonably quickly with input vectors up to 10^5 in size.
