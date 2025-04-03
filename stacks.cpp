/*
Copyright [2025]

Code for Stacks data structure tutorial.

Author: Parker Hicks
Date: 2025-04-03
*/

#include <iostream>
#include <string>
#include <stack>


// Stack definition
// A stack is a LIFO (last-in first-out) data structure that stores
// objects into a 'vertical tower' where you can only write and read
// from the top of the tower.

// Example implementation
// Undo/redo button storing the state of a document before
// and after changes were made to it

// Functions
// push() adds to the top of the stack
// top() retrieves the top element
// pop() deletes the top element

int main() {
    std::stack<std::string> st;  // Initialize the stack with dtype
    st.push("Carson");
    st.push("Tammy");
    st.push("Todd");
    st.push("Payton");

    std::string top_element = st.top();
    std::cout << top_element << std::endl;

    st.pop();   // Delete top element
    std::string new_top = st.top();
    std::cout << new_top << std::endl;

    return 0;
}
