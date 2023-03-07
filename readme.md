# Parser+AST

This branch is to build the parser and ast for the compiler project. For working version, go to the branch parser_ast. Do test in this branch. After finish testing. Push the changes back to the parer_ast branch. 

### To do list

- [x] Hello world
- [ ] Function declarations
- [ ] Arithmetics
- [ ] If, While, For
- [ ] Pointers
- [ ] Struct


Notes for code gen:
 // Define a base class Tree with subclasses a, b, and c
class Tree {
    // ...
};

class a : public Tree {
    // ...
};

class b : public Tree {
    // ...
};

class c : public Tree {
    // ...
};

// Declare a pointer to a Tree object
Tree* pointer;

// Check if pointer is of subtype a
if (a* a_ptr = dynamic_cast<a*>(pointer)) {
    // pointer is of subtype a
    // handle a_ptr here
}

// Check if pointer is of subtype b
else if (b* b_ptr = dynamic_cast<b*>(pointer)) {
    // pointer is of subtype b
    // handle b_ptr here
}

// Check if pointer is of subtype c
else if (c* c_ptr = dynamic_cast<c*>(pointer)) {
    // pointer is of subtype c
    // handle c_ptr here
}

// Handle cases where pointer is not of any subtype
else {
    // handle other cases here
}
